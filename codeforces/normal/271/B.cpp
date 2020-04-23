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
#define mp make_pair
#define r(input) freopen("b.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define inf 1000000000 
#define mod = 1000000009;
using namespace std;
vector<int> pri;
bool primo[200000];
void criba(){
	memset(primo,true,sizeof primo);
	primo[0]=primo[1]=false;
	for(int i=2;i<200000+1;i++){
		if(primo[i]){
			pri.pb(i);
			for(int j=i+i;j<200000;j+=i){
				primo[j]=false;
			}
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	criba();
	int n,m,dat;
	vector<int>::iterator lower;
	while(sc("%d %d",&n,&m)!=EOF){
		bool f=false;
		int a2=0,b2=0;
		int ans=inf,ans2=inf;
		int mat[550][550];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				sc("%d",&dat);
				mat[i][j]=dat;
				lower = lower_bound(pri.begin(), pri.end(), dat);
				a2+=abs(*lower-dat);
			}
			ans=min(ans,a2);
			a2=0;
		}
		b2=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){	
				dat=mat[j][i];
				lower = lower_bound(pri.begin(), pri.end(), dat);
				b2+=abs(*lower-dat);
			}
			ans2=min(ans2,b2);
			b2=0;
		}
		b2=0; 
		printf("%d\n",min(ans2,ans));
	}
	return 0;
}