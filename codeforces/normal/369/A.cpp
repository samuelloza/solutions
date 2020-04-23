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
#define r(input) freopen("a.in","r",stdin)
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
	int n,m,k,dat;
	while(sc("%d %d %d",&n,&m,&k)!=EOF){
		int su1=0;
		int su2=0;
		for (int i = 0; i < n; i++){
			sc("%d",&dat);
			if(dat==1)su1++;
			else su2++;
		}
		int ans = 0;
		if(su1 >= m) {
			ans = su1-m;
			if(su2 >= k)ans += su2-k;
		}
		else {
			if(su2 >= (m-su1)+k)ans = su2-(m-su1)-k;
		}
		printf("%d\n", ans);
	}
	return 0;
}