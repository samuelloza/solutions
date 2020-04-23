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
#include <unordered_map>


#define 	ll long long
#define 	lld long long int
#define 	sc scanf
#define 	pi 2*acos(0.0)
#define 	f first
#define 	s second
#define 	sz size()
#define 	mp make_pair
#define 	r(input) freopen("b.in","r",stdin)
#define 	w(output) freopen("b.out","w",stdout)
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
	int n,m,dat;
	sc("%d %d",&n, &m);
	vector<int> vec,vec2;
	for(int i=0;i<m;i++){
		sc("%d",&dat);
		if(i==0)vec.pb(dat);
		else if(vec[i-1]!=dat)vec.pb(dat);
	}

	int index=1;lld ans=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i]>=index) ans+=(vec[i]-index);
		else ans+=(n-index+vec[i]);
		index=vec[i];
	}
	cout<<ans<<endl;

	return 0;
}