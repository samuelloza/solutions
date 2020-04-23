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
#define 	r(input) freopen("a.in","r",stdin)
#define 	w(output) freopen("a.out","w",stdout)
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
	#ifndef ONLINE_JUDGE
	//r(input);
	#endif
	int n;
	sc("%d",&n);
	string a="Sheldon",b="Leonard",c="Penny",d="Rajesh",e="Howard";
	std::vector<string> v,v2;
	v.pb(a);v.pb(b);v.pb(c);v.pb(d);v.pb(e);
	v2.pb(a);v2.pb(a);
	v2.pb(b);v2.pb(b);
	v2.pb(c);v2.pb(c);
	v2.pb(d);v2.pb(d);
	v2.pb(e);v2.pb(e);
	string aux="";
	if(n <= 5 )cout<<v[n-1]<<endl; 
	else{
		int j=0;
		while(n--){
			j++;
			if(j>v2.size())j=0;
		}
		cout<<v2[j-5]<<endl;	
	}
	return 0;
}