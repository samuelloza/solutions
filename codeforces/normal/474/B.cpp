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
	int n,tmp;
	sc("%d",&n);
	vector<pair<lld,lld> > st;
	vector<lld> vec;
	lld	 old=0;
	for(int i=0;i<n;i++){
		sc("%d",&tmp);
		if(i==0){
			st.pb(mp(1,tmp));
			vec.pb(tmp);
			old=tmp;

		}else{
			st.pb(mp(old+1,tmp+old));
			vec.pb(tmp+old);
			old=tmp+old;
		}
		
	}
	int m;
	sc("%d",&m);
	int dat=0;
	vector<lld > ::iterator low;

	for(int i=0;i<m;i++){
		sc("%d",&dat);
		low=lower_bound (vec.begin(), vec.end(), dat);
		printf("%d\n",(low-vec.begin())+1 );

		/*for(int j=0;j<st.size();j++){
			if(dat>=st[j].f && dat<=st[j].s){
				printf("%d\n",j+1);break;
			}
		}*/
		}
		return 0;
	}