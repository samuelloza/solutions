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
using namespace std;
#define lld long long int 

typedef pair <int, int> dist_node;
typedef pair <int, lld> edge;
const int MAXN = (100000 + 100);
const long long INF = 1LL << 60; 
vector <edge> g[MAXN];
int p[MAXN];    // El predecesor de u camino mas corto

lld dijkstra(int s, int n){
	vector<lld> d(MAXN,INF);
	memset(p,-1,sizeof p);
	set<dist_node> q;
	d[s] = 0;
	q.insert(dist_node(0, s));
	while (!q.empty()){
		dist_node par=*q.begin();
		q.erase(q.begin());  
		lld dist = par.first;
		lld cur =  par.second;
		if (dist > d[cur]) continue;
		for (int i = 0; i < g[cur].size(); i++){
			lld next = g[cur][i].first;
			lld w_extra = g[cur][i].second;
			if (d[cur] + w_extra < d[next]){
				q.erase(dist_node(d[next], next));
				d[next] = d[cur] + w_extra;
				p[next] = cur;
				q.insert(dist_node(d[next], next));
			}
		}
	}
	return d[n]; 
}
vector <int> find_path (int t){
	vector <int> path;
	int cur = t;
	while(cur != -1){
		path.push_back(cur);
		cur = p[cur];
	}
	reverse(path.begin(), path.end());
	return path;
}
int main(){
   int n, m;
   int u, v, w;
   scanf("%d %d",&n,&m);
   for (int i = 0; i < m; i++){
      scanf("%d %d %d",&u,&v,&w);
      g[u].push_back(edge(v, w));
      g[v].push_back(edge(u, w));
   }
   if(dijkstra(1,n)>=INF){
      printf("-1\n");
   }else{
      vector<int> sol=find_path(n);
      printf("%d",sol[0] );
      for(int i=1;i<sol.size();i++){
         printf(" %d",sol[i]);
      }
      printf("\n");
   }
   return 0;
}