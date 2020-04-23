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

#define ll long long
#define lld long long int
#define sc scanf
#define pi 2*acos(0.0)
#define f first
#define s second
#define sz size()
#define mp make_pair
#define r(input) freopen("c.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define inf 1000000000 
#define mod = 1000000009;
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	long long int vec[500010];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%lld",&vec[i]);
	}
	sort(vec,vec+n);
	long long int mid=(n)>>1;
	long long int may=n-1;
	long long int mi=0;
	long long int ans=0;
	for(int i=mid-1;i>=0;i--){
		if(vec[may] >= vec[i]*2 ){
			may--;
			ans++;
		}
	}
	printf("%lld\n",n-ans );
	return 0;
}