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
	int n,d,m,dat;
	sc("%d %d",&n,&d);
	vector<int> vec;
	for(int i=0;i<n;i++){
		sc("%d",&dat);
		vec.pb(dat);
	}
	sort(vec.begin(),vec.end());
	sc("%d",&m);
	int ans=0,ans2=0;
	if(m>n){
		ans=(m-n)*d;
	}
	for(int i=0;i<m&&i<n;i++){
		ans2+=vec[i];
	}
	printf("%d\n",ans2-ans);
	return 0;
}