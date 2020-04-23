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

vector<vector<int > > gra(2000+2);	
bool vis[2000+2];
char color[2000+2];
bool bfs(int start){
	queue<int> cola;
	color[start]=1;
	cola.push(start);
	while(!cola.empty()){
		int tmp=cola.front();
		cola.pop();
		vis[tmp]=true;
		for(int i=0;i<gra[tmp].size();i++){
			if(color[tmp]==color[gra[tmp][i]])return false;
			else if(color[gra[tmp][i]]==-1){
				color[gra[tmp][i]]=1-color[tmp];
				cola.push(gra[tmp][i]);
			}	
		}
	}
	return true;
}
int main(){
	int t,a,b,conta=1;
	sc("%d",&t);
	while(t--){
		int n,m;
		sc("%d %d",&n,&m);
		for(int i=1;i<=n;i++){
			gra[i].clear();
			color[i]=-1;
			vis[i]=false;
		}
		//memset(vis,false,sizeof vis);

		for(int i=0;i<m;i++){
			sc("%d %d",&a,&b);
			gra[a].pb(b);
			gra[b].pb(a);
		}
		printf("Scenario #%d:\n",conta );
		bool sw=true;
		for(int i=1;i<=n && sw;i++){
				if(vis[i]==false&&bfs(i)==false){
					printf("Suspicious bugs found!\n");
					sw=false;
					break;
				}
			
		}
		if(sw){
			printf("No suspicious bugs found!\n");
		}
		conta++;
	}
	return 0;
