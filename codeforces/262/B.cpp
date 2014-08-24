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

#ifndef ONLINE_JUDGE
#  define LOG(x) cerr << x << endl; 
#else
#  define LOG(x)
#endif
using namespace std;
//unordered_map<int,int> unmap;
int sum(int a){
	int ans=0;
	while(a!=0){
		ans+=a%10;
		a/=10;
	}
	return ans;
}
double POW(double a, double b) {
	double po = 1;
	for(int i=0; i<b; i++)
		po *= a;
	return po;
}
int f(int a, int b,int c){
	int i=2;
	int su=1;
	int a2,a1;
	a1=b*(su)+c;
	a2=sum(a1);
	bool sw=false;
	vector<int> ans;
	if(su==a2){
		sw=true;
		ans.pb(a1);
		//printf("%d\n",a1);
	}
	int po=0;
	while(i < 81 ){
		int po=POW(i,a);
		su=sum(po);
		a1=b*((int)(po))+c;
		
		if(a1 > 1000000000)break;
		//cerr << a1<< "\n";
		a2=sum(a1);
		if((sum(a1)==(int)i)){
			ans.pb(a1);
			//printf("%d\n",a1);
			sw=true;
		}

		i++;
	}
	if(!sw)cout<<0<<endl;
	else{
		printf("%d\n",ans.size());
		printf("%d",ans[0]);
		for(int i=1;i<ans.size();i++){
			printf(" %d",ans[i] );
		}
		printf("\n");
	}
}
int main(){
	int a,b,c;
	sc("%d %d %d",&a,&b,&c);
	f(a,b,c);	
	return 0;
}