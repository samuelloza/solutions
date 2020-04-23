#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
#define sc scanf;
using namespace std;
#define MAXN 1000005
int n,t;  //n es el tamaÃ±o de la cadena
int m,tam1;

int p[MAXN],r[MAXN],h[MAXN];
//r indices del sa para mostrar indice   s.substr(r[i])
//p es el inverso del suffix array, no usa indices del suffix array ordenado
//h el el tamaÃ±o del lcp entre el i-esimo y el i+1-esimo elemento de suffix array ordenado
string s;
void fix_index(int *b, int *e) {
   int pkm1, pk, np, i, d, m;
   pkm1 = p[*b + t];
   m = e - b; d = 0;
   np = b - r;
   for(i = 0; i < m; i++) {
      if (((pk = p[*b+t]) != pkm1) && !(np <= pkm1 && pk < np+m)) {
         pkm1 = pk;
         d = i;
      }
      p[*(b++)] = np + d;
   }
}
 
bool comp(int i, int j) {
   return p[i + t] < p[j + t];
}
void suff_arr() {
   int i, j, bc[256];
   t = 1;
   for(i = 0; i < 256; i++) bc[i] = 0;  //alfabeto
   for(i = 0; i < n; i++) ++bc[int(s[i])]; //counting sort inicial del alfabeto
   for(i = 1; i < 256; i++) bc[i] += bc[i - 1];
   for(i = 0; i < n; i++) r[--bc[int(s[i])]] = i;
   for(i = n - 1; i >= 0; i--) p[i] = bc[int(s[i])];
   for(t = 1; t < n; t *= 2) {
      for(i = 0, j = 1; i < n; i = j++) {
         while(j < n && p[r[j]] == p[r[i]]) ++j;
         if (j - i > 1) {
            sort(r + i, r + j, comp);
            fix_index(r + i, r + j);
         }
      }
   }
}
 
void lcp() {
   int tam = 0, i, j;
   for(i = 0; i < n; i++)if (p[i] > 0) {
      j = r[p[i] - 1];
      while(s[i + tam] == s[j + tam]) ++tam;
      h[p[i] - 1] = tam;
      if (tam > 0) --tam;
   }
   h[n - 1] = 0;
}
int owner(int idx){
    return (idx < n-m-1) ? 1 : 2;
}
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		cin>>s;
		s.append("$");
		n=s.size();
		long long int ans=(n*(n-1))/2;
		suff_arr();
		lcp();
		for(int i=0;i<n;i++){
			ans-=h[i-1];
		}
		printf("%lld\n",ans );
	}
	return 0;
