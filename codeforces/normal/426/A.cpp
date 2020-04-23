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
	int n,s;
	sc("%d %d",&n,&s);
	vector<int> vec;
	int dat=0;
	for (int i = 0; i < n; i++){
		sc("%d",&dat);
		vec.pb(dat);
	}
	sort(vec.begin(),vec.end());
	int ans=0;
	bool sw=false;
	for(int i=0;i<n;i++){
		ans=0;
		for(int j=0;j<n;j++){
			if(i!=j){
				ans+=vec[j];
			}
		}
		if(ans<=s){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");

	return 0;
}