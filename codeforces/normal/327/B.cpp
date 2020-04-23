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
int pri[9000000 + 10];

//unordered_map<int,int> unmap;
int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	int n;
	sc("%d",&n);
	vector<int> vec;
	for(int i=2;i<=9000000;i++){
		if(pri[i] == false){
			for(int j=2;j*i<=9000000;j++){
				pri[i*j] = true;
			}
			if(n == 0){
				break;
			}
			vec.pb(i);
			n--;
		}
	}
	cout<<vec[0];
	for(int i=1;i<vec.size();i++){
		cout<<" "<<vec[i];
	}
	cout<<endl;
	return 0;
}