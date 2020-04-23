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
#include <iomanip> 
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
	int n,x;
	sc("%d %d",&n,&x);
	int a,b;
	vector<pair<int,int> > vec;
	while(n--){
		sc("%d %d",&a,&b);
		vec.pb(mp(a,b));
	}
	sort(vec.begin(),vec.end());
	int i=0;
	int ini=0;
	int ans=0;	
	while(i < vec.size()){
		if((ini + x >= vec[i].f && ini + x <=vec[i].s) || ini+x >vec[i].s){
			ans+=abs(ini-vec[i].s);
			ini+=abs(ini-vec[i].s);
			i++;
		}else{
			ini+=x;
		}
	}
	printf("%d\n",ans);
	return 0;


}