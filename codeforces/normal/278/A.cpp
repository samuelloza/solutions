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
#define pf printf
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
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define lim 100000 
using namespace std;
int main(){
	int n,dat;
	vector<int> vec;
	sc("%d",&n);
	int ans1=0,ans2=0;
	while(n--){
		sc("%d",&dat);
		vec.pb(dat);
		ans1+=dat;
	}
	int a,b;
	sc("%d %d",&a,&b);
	a--;
	b--;
	if(a>b)swap(a,b);
	for(int i=a;i<b;i++){
		ans2+=vec[i];
	}
	printf("%d\n",min(abs(ans1-ans2),abs(ans2)));
	return 0;
}