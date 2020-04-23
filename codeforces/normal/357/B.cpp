#include <algorithm>
#include <iostream>
#include <iterator>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>

#define ll long long
#define lld long long int
#define sc scanf
#define pi 2*acos(0.0)
#define f first
#define s second
#define sz size()
#define mp make_pair
#define r(input) freopen("b.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define inf 1000000000 
#define mod = 1000000009;
using namespace std;
int col[100020];
void use(int a, int b,int c){
	if(col[a]==1){
		col[b]=2;
		col[c]=3;
	}else if(col[a]==2){
		col[b]=1;
		col[c]=3;
	}else {
		col[b]=1;
		col[c]=2;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	int n,m,a,b,c;
	//memset(col,0,sizeof col);
	sc("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		sc("%d %d %d",&a,&b,&c);
		///
		if(!col[a] && !col[b] && !col[c]){
			col[a]=1;col[b]=2;col[c]=3;
		}else{
			if(col[a] && !col[b] && !col[c])use(a,b,c);
			else if(!col[a] && col[b] && !col[c])use(b,c,a);
			else if(!col[a] && !col[b] && col[c])use(c,b,a);
		}
		///
	}
	printf("%d",col[1]);
	for(int i=2;i<=n;i++){
		printf(" %d",col[i]);
	}	
	printf("\n");
	return 0;
}