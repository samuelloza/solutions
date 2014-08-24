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
	int t,n,m,c_i;
	int k=1;
	sc("%d",&t);
	while(t--){
		sc("%d %d",&n,&m);
		int tmp;
		int old=m;
		vector<int> vec;
		while(m--){
			sc("%d",&tmp);
			vec.pb(tmp);
		}
		//sort(vec.begin(),vec.end());
		int i=0;
		for(;i<old;i++){
		//	if(i==0){
				if(n-vec[i] >= 0){
					n-=vec[i];
				}else{
					break;
				}
			//}else{
		//		std::vector<int>::iterator low,up;
				//low=std::lower_bound (v.begin(), v.end(), 20);
		//		up= std::upper_bound (v.begin(), v.end(), 20); 
		//	}

		}

		if(i%2==1){
			printf("Caso #%d: SI\n",k );
		}else{
			printf("Caso #%d: NO\n",k );
		}
		k++;
	}
	return 0;
}