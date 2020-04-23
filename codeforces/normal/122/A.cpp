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
	vector<int> ans;
	ans.pb(4);
	ans.pb(44);
	ans.pb(47);
	ans.pb(444);
	ans.pb(447);
	ans.pb(474);
	ans.pb(477);
	ans.pb(7);
	ans.pb(77);
	ans.pb(74);
	ans.pb(744);
	ans.pb(774);
	ans.pb(747);
	ans.pb(777);
	
	int n;
	sc("%d",&n);
	for(int i=0;i<ans.size();i++)
		if(n%ans[i]==0){
			cout<<"YES"<<endl;
			return 0;
		}
		cout<<"NO"<<endl;
		return 0;
	}