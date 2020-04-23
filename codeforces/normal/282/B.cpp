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
	int n;
	sc("%d",&n);
	int a,g;
	int r=0,s=0;
	vector<pair<int,int > > vec;
	for(int i=0;i<n;i++){
		sc("%d %d",&a,&g);
		vec.pb(mp(a,g));
	}
	vector<string> sol;
	for(int i=0;i<vec.size();i++){
		if(abs((r+vec[i].f) - s)<=500){
			sol.pb("A");
			r+=vec[i].f;
		}else{
			if(abs(r - (s+vec[i].s))<=500){
				sol.pb("G");
				s+=vec[i].s;
			}else{
				if(abs((r+vec[i].s) -s)<=500){
					sol.pb("G");
					s+=vec[i].s;
				}else{
					if(abs(r-(s+vec[i].f))<=500){
						sol.pb("G");
						r+=vec[i].f;
					}else{
						printf("-1\n");
						return 0;
						
					}
				}
			}
		}	
	}
	for(int i=0;i<sol.size();i++){
		cout<<sol[i];
	}
	cout<<endl;
	return 0;
}