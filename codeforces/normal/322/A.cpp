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
int main(){
	int n,m;
	sc("%d %d",&n,&m);
	//if(n < m)swap(n,m);
	vector<pair<int,int> > vec;
	vector<bool>as(n+1,0);
	vector<bool>ad(m+1,0);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!as[i] or !ad[j]){
				vec.pb(mp(i,j));
			}
			as[i]=1;
			ad[j]=1;
		}	
	}
	printf("%d\n",vec.size() );
	for(int i=0;i<vec.size();i++){
		printf("%d %d\n",vec[i].f,vec[i].s );
	}
	return 0;
}