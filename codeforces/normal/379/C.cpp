#include <algorithm>
#include <iostream>
#include <iterator>
#include <cassert>
#include <sstream>
#include <fstream>
#include <unordered_map>	//c++0x
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


#define 	ll long long
#define 	lld long long int
#define 	sc scanf
#define 	pi 2*acos(0.0)
#define 	f first
#define 	s second
#define 	mp make_pair
#define 	r(input) freopen("c.in","r",stdin)
#define 	w(output) freopen("c.out","w",stdout)
#define 	pb push_back
#define 	inf 1000000000 
#define 	mod 1000000009
using namespace std;
unordered_map<int,int> unmap;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.f < b.f;
}
int main(){
	int n,dat;
	sc("%d",&n);
	vector<pair<int,int > > vec;
	for(int i=0;i<n;i++){
		sc("%d",&dat);
		vec.pb(mp(dat,i+1));
	}
	sort(vec.begin(),vec.end(),cmp);
	int ans[n];
	for(int i=0;i<n;i++){
		if(unmap[vec[i].f]==0){
			ans[vec[i].s-1]=vec[i].f;	
		}else{
			ans[vec[i].s-1]=unmap[vec[i].f]+vec[i].f;
			unmap[unmap[vec[i].f]+vec[i].f]++;
		}
		unmap[vec[i].f]++;
	}
	cout<<ans[0];
	for (int i = 1; i < n; i++){
		cout<<" "<<ans[i];
	}
	cout<<endl;
	return 0;
}