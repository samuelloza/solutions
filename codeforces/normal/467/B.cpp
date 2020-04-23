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
int fun(int n){
	int q=0;
	while(n > 0){
		if(n%2 == 1)q++;
		n/=2;
	}
	return q;
}
int main(){
	int n,m,k;
	sc("%d %d %d",&n,&m,&k);
	vector<int> vec;
	int tmp;
	while(m--){
		sc("%d",&tmp);
		vec.pb(tmp);
	}
	int f;
	sc("%d",&f);
	int ans=0;
	for(int i=0;i<vec.size();i++){
		if(fun(vec[i] xor f) <= k)ans++;
	}
	printf("%d\n",ans );
	return 0;
}