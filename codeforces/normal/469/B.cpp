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
	int p,q,l,r;
	sc("%d %d %d %d",&p,&q,&l,&r);
	vector<pair<int,int> >z,x;
	int a,b;
	bool vec[100000];
	memset(vec,false,sizeof vec);
	while(p--){
		sc("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			vec[i]=true;
		}
	}
	while(q--){
		sc("%d %d",&a,&b);
		x.pb(mp(a,b));	
	}
	int t=0;
	int ans=0;
	vector<pair<int,int > > aux;
	int old=0;
	for(int i=l;i<=r;i++){
		bool sw=true;
		for(int j=0;j<x.size()&&sw;j++){
			for(int k=x[j].f+i;k<=x[j].s+i;k++){
				if(vec[k]){
					ans++;
					sw=false;
					break;
				}
			}
		}
	}
	printf("%d\n",ans );
	return 0;
}