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
	long long int n,t,c;
	sc("%lld %lld %lld",&n,&t,&c);
	long long int ans=0;
	long long int oldans=0;
	long long int dat;
	bool par=false;
	if(c%2==0){
		par=true;
	}
	for (int i = 0; i < n; i++){
		sc("%lld",&dat);
		if(dat <= t){
			oldans++;
		}else{
			if(par){
				ans+=(oldans-1);
			}else{
				ans+=((oldans/c));
			}
			oldans=0;
		}
	}


		if(oldans==0){
			cout<<ans<<endl;
		}else{
			if(par){
				cout<<(ans+oldans-1)<<endl;
			}else{
				cout<<((oldans/c)+ans)+1<<endl;
			}
		}
	
	return 0;
}