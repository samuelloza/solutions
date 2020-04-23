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
#define r(input) freopen("c.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define inf 1000000000 
#define mod 1000000009;
using namespace std;
int ao=0;
int X[]={-1,1,0, 0};
int Y[]={ 0,0,1,-1};
bool vis[1000][1000];
bool vis2[1000][1000];
int n,m,k;
vector<string> cade;
void bfs(int x,int y){
	if(k==0)return;
	k--;
	cade[x][y]='X';
	int a,b;
	for(int index=0;index<4;index++){
		a=X[index]+x;
		b=Y[index]+y;
		if(a>=0 && a<n && b>=0 && b<m ){
			if(cade[a][b]=='.')bfs(a,b);
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	sc("%d%d%d",&n,&m,&k);
	string aux;
	getchar();
	cade.clear();
	for(int i=0;i<n;i++){
		getline(cin,aux);
		cade.pb(aux);
	}
	ao=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(cade[i][j]=='.')ao++;
		}
	}
	k=ao-k;
	int conta=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m ;j++){
			if(cade[i][j]=='.'){
				bfs(i,j);
			}
		}

	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(cade[i][j] == '.') printf("X");
			else if(cade[i][j] == 'X') printf(".");
			else putchar(cade[i][j]);
		}
		printf("\n");
	}
	return 0;
}