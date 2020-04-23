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
	#ifndef ONLINE_JUDGE
	//r(input);
	#endif
	int n;
	sc("%d",&n);
	vector<int> vec;
	int dat;
	bool sw=true;
	vector<bool> use(n,false);
	map<int,int> mapa;
	for(int i=0;i<n;i++){
		sc("%d",&dat);
		vec.pb(dat);
		mapa[dat]++;
		if(i!=0 ){
			if(vec[i-1] > vec[i] or vec[i-1]==vec[i] )sw=false;
		} 
	}
	if(sw){
		printf("%d\n",n );
		printf("%d",vec[0] );
		for (int i = 1; i < n; i++){
			printf(" %d",vec[i] );
		}
	}else{
		int di=0;
		map<int,int> ::iterator it=mapa.begin();
		int h=0;
		for(;it!=mapa.end();it++,h++){
			if(h!=0)cout<<" ";
			printf("%d",it->first );
			di=it->first;
			mapa[it->first]--;
			sw=!sw;
		}
		it=mapa.end();
		h=0;
		for(;it!=mapa.begin();it--,h++){
			if(mapa[it->second]> 0 && it->first!=di){
				if(h!=0)cout<<" ";
				printf("%d",it->first );
			}
			mapa[it->first]--;

		}



	}
	printf("\n");

	return 0;
}