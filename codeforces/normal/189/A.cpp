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

	int n,a,b,c;
	sc("%d %d %d %d",&n,&a,&b,&c);
	int dp[1000000];
	memset(dp,-(1<<30),sizeof dp);
	dp[0]=0;
	for (int i = 1; i <=n; i++){
		dp[i]=-inf;
		if(i >=a ){
			dp[i]=max(dp[i],1+dp[i-a]);
		}
		if(i >=b ){
			dp[i]=max(dp[i],1+dp[i-b]);
		}
		if(i >=c ){
			dp[i]=max(dp[i],1+dp[i-c]);
		}
	}
	printf("%d\n",dp[n] );
	return 0;
}