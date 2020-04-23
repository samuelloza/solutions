#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>
#define MAXN 1100000
using namespace std;
int N,i,j,izq,der,posi,dist;
string cad;
int p[MAXN];
char str2[MAXN];
void mancher(){
	int mx = 0, id, i;
	memset(p, 0, sizeof(p));

	for (i = 1; i < N; i++){
		if (mx > i){
			p[i] = min(p[2 * id - i], mx - i);
		} else {
			p[i] = 1;
		}
		for ( ; str2[i - p[i]] == str2[i + p[i]]; p[i]++)
			;
		if (i + p[i] > mx){
			mx = i + p[i];
			id = i;
		}
	}
	/*
	int ans=0;
    for (i = 0; i < N; i++)	ans = max(ans, p[i]);
    ans--;return ans;
    */
}

int main() {
	//freopen("1470.in","r",stdin);
	int k;
	scanf("%d",&k);getchar();
	while(k--){
		cin>>cad;
		str2[0]='$';str2[1]='#';
		N=cad.size();
		for(i=0;i<N;i++){
			str2[i*2+2]=cad[i];
			str2[i*2+3]='#';
		}
		N=N*2+2;
		str2[N]=0;
		mancher();
		int ans=0;
		for(int i=1;i<N;i+=2){
			int mid=p[i]/2;

			for(int j=i+ans*2+2;j<=mid+i&&j<N;j+=2){
				if(j-p[j]+1<=i)
					{ans=(j-i)/2;}
			}
			
		}

		printf("%d\n",ans*4);

	}
	return 0;
}