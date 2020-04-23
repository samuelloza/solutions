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
#define 	r(input) freopen("a.in","r",stdin)
#define 	w(output) freopen("a.out","w",stdout)
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
	#ifndef ONLINE_JUDGE
 	//r(input);
	#endif
	int k,l,m,n,d;
	sc("%d %d %d %d %d",&k,&l,&m,&n,&d);
	bool vec[d+3];
	memset(vec,false,sizeof vec);
	int ans=0;
	for(int i=k;i<=d;i+=k){vec[i]=true;}
	for(int i=l;i<=d;i+=l){vec[i]=true;}
	for(int i=m;i<=d;i+=m){vec[i]=true;}
	for(int i=n;i<=d;i+=n){vec[i]=true;}
	
	for(int i=1;i<=d;i++)
		if(!vec[i])ans++;

	printf("%d\n",d-ans);
	return 0;
}