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
#define 	r(input) freopen("b.in","r",stdin)
#define 	w(output) freopen("b.out","w",stdout)
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
	int vec[100000*4];
	double a,d;
	cin>>a>>d;
	int n;
	cin>>n;
	map<int,pair<int, int  > > mapa;
	mapa[1]=mp(0,a);
	mapa[2]=mp(a+1,a+a);
	mapa[3]=mp((a+a)+1,(a+a)+a);
	mapa[4]=mp((a+a)+a+1,a+a+a+a);
	//simetrico
	int sim[5];
	sim[1]=3;
	sim[2]=4;
	sim[3]=1;
	sim[4]=2;
	double x,y;
	double dist=0.0;
	double dd=1;
	int index=0;
	for(int i=0;i<n;i++){
		if(dist+(d*dd) > a*4){
			dist=dist+(d)-a*4;
		}else{
			dist+=(d*dd);
		}
		if(dist>=mapa[1].f&&dist<=mapa[1].s){
			x=dist;
			y=0;
		}

		if(dist>=mapa[2].f&&dist<=mapa[2].s){
			x=mapa[2].s-a;
			y=mapa[2].s-dist;
		}

		if(dist>=mapa[3].f&&dist<=mapa[3].s){
			x=mapa[3].s-dist;
			y=a;
		}

		if(dist>=mapa[4].f&&dist<=mapa[4].s){
			x=0;
			y=mapa[4].s-dist;
		}
		printf("%.10f %.10f\n",x,y );
	}

	return 0;
}