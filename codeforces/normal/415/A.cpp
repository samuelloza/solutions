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
#define 	w(output) freopen("a.in.out","w",stdout)
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
	r(input);
	#endif
	int n,m,dat,aux;
	sc("%d%d",&n,&m);
	int vec[n+10];
	memset(vec,-1,sizeof vec);
	for(int i=0;i<m;i++){
		sc("%d",&dat);
		aux=dat;
		for(;dat<=n;dat++){
			if(vec[dat]==-1){
				vec[dat]=aux;
			}
		}
	}
	printf("%d",vec[1]);
	for(int i=2;i<=n;i++){
		printf(" %d",vec[i] );
	}
	printf("\n");
	return 0;
}