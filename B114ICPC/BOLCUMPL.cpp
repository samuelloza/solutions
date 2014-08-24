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
int main(){
	int  test;
	sc("%d",&test);
	while(test--){
		int ele,espa;
		scanf("%d%d", &ele,&espa); 
		vector<int>vec;
		int a,b;
		for(int i = 0; i < ele; i++){
			sc("%d",&a);
			vec.pb(a);
		}
		sort(vec.begin(),vec.end());

		int ma=0;
		int tmp=0;
		for(int i=0;i<ele;i++){
			if(tmp + vec[i] <= espa){
				ma++;
				tmp+=vec[i];
			}else{
				break;
			}
		}
		printf("%d\n",ma );
	}
	return 0;
}