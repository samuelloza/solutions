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
	int n,k;
	lld aux;
	sc("%d %d",&n,&k);
	vector<lld> vec;
	vector<lld> jump;
	lld ma=2*-inf;;
	for(int i=0;i<n;i++){
		sc("%lld",&aux);
		vec.pb(aux);
		ma=max(aux,ma);
	}
	if(k>0){
		while(k--){
			bool pos=true;
			lld oldmax=-2*inf;
			for(int i=0;i<n;i++){
				vec[i]=ma-vec[i];
				if(vec[i] < 0){
					pos=false;
				}
				oldmax=max(vec[i],oldmax);
			}
			ma=oldmax;
			if(pos){
				break;
			}
		}
		if(k%2!=0){
			for(int i=0;i<n;i++){
				vec[i]=ma-vec[i];
			}
		}
	}
	printf("%lld",vec[0]);
	for(int i=1;i<n;i++){
		printf(" %lld",vec[i]);
	}
	printf("\n");	
	return 0;
}