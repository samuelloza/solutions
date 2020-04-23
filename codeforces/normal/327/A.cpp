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
	int n;
	bool dat;
	sc("%d",&n);
	vector<bool> vec,vec2;
	int ans2=0;
	for(int i=0;i<n;i++){
		cin>>dat;
		vec.pb(dat);
		vec2.pb(dat);
		if(dat)ans2++;
	}
	if(n==1){if(!vec[0])printf("%d\n",1 );else printf("%d\n",0); return 0;}
	int ans=0;
	for(int i=0;i<n;i++){
		for (int j = i; j < n; j++){
			int c=0;
			for(int k=i;k<=j;k++){
				vec[k]=!vec[k];
			}

			for(int k=0;k<n;k++){
				if(vec[k])c++;
			}

			ans=max(ans,c);
			for(int h=0;h<n;h++){
				vec[h]=vec2[h];
			}
		}
	}
	printf("%d\n",max(ans,ans2-1));
	return 0;
}