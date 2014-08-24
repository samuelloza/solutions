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
//#include <unordered_map>


#define 	ll long long
#define 	lld long long int
#define 	sc scanf
#define 	pi 2*acos(0.0)
#define 	f first
#define 	s second
#define 	sz size()
#define 	mp make_pair
#define 	r(input) freopen(".in","r",stdin)
#define 	w(output) freopen(".out","w",stdout)
#define 	maxall(v) *max_element(v.begin(),v.end())
#define 	minall(v) *min_element(v.begin(),v.end())
#define 	Sort(v) sort(v.begin(),v.end())
#define 	clr(a)  memset(a,0,sizeof(a))
#define 	pb push_back
#define 	inf 1000000000 
#define 	mod 1000000009
using namespace std;
//unordered_map<int,int> unmap;
int resp[]={0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0};
int X[]={1,1, 1,-1,-1,-1,0, 0};
int Y[]={1,0,-1, 1, 0,-1,1,-1};
vector<string> vec;
bool vis[1000][1000];
int ans=0;
void dfs(int i,int j,int a,int b,char data,vector<string> cade){
	vis[i][j]=true;
	for(int l=0;l<8;l++){
		if((X[l]+i>=0 && X[l]+i < a) && Y[l]+j>=0 && Y[l]+j < b ){
			if(!vis[X[l]+i][Y[l]+j] && cade[X[l]+i][Y[l]+j]==data){
				dfs(X[l]+i,Y[l]+j,a,b,data,cade);
			}
		}
	}
}
void solve(vector<string> cade,int a, int b){
	memset(vis,false,sizeof vis);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(cade[i][j]!='0' && !vis[i][j]){
				resp[cade[i][j]-'0']++;
				dfs(i,j,a,b,cade[i][j],cade);
				ans++;
			}
		}
	}
}
int main(){
	int test;
	sc("%d",&test);
	int k=1;
	while(test--){
		int a,b;
		sc("%d %d",&a,&b);
		getchar();
		for(int i=0;i<a;i++){
			string cade;
			cin>>cade;	
			vec.pb(cade);
		}
		solve(vec,a,b);
		printf("Caso #%d: %d\n",k,ans);
		cout<<resp[1];
		for(int i=2;i<10;i++){
			cout<<" "<<resp[i];
		}
		cout<<endl;
		memset(resp,0,sizeof resp);
		ans=0;
		vec.clear();
		k++;
	}
	return 0;
}
