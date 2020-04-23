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
typedef int V;
typedef pair<V,int> P;
typedef set<P> S;

int N;
vector<P> A[100001];
V dijstra(int s,int t){
	S m;
	vector<V> z(N,1000000);
	z[s]=0;
	m.insert(mp(0,s));
	while(m.size() > 0){
		P p=*m.begin();
		m.erase(m.begin());
		if(p.s==t) return p.f;
		for(int i=0;i<A[p.s].size();i++){
			P q(p.f+A[p.s][i].f, A[p.s][i].s);
			if(q.f < z[q.s]){
				m.erase(mp(z[q.s],q.s));
				m.insert(q);
				z[q.s]=q.f;
			}
		}
	}
	return -1;
}
/*
7 7
1 2 
3 2
3 4
7 4
6 2
5 6
7 5
*/
int main(){
	int n,m,a,b;
	sc("%d%d",&N,&m);
	for(int i=0;i<m;i++){
		sc("%d %d",&a,&b);
		A[a-1].pb(mp(0,b-1));
		A[b-1].pb(mp(1,a-1));
	}
	cout<<dijstra(0,N-1)<<endl;
	return 0;
}