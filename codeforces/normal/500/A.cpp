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
#include <iomanip> 
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
using namespace std;
//unordered_map<int,int> unmap;
int main(){
	int n,t,tmp;
	sc("%d %d",&n,&t);
	map<int,int> mapa,mapa2;
	int i=1;
	while(n-- > 1){
		sc("%d",&tmp);
		mapa[i]=tmp+i;
		mapa2[tmp+i]=i;
		i++;
	}
	map<int,int> ::iterator it=mapa.begin();
	i=1;
	i=mapa[i];
	bool sw=false;
	while(i){
		if(i==t){
			sw=true;
			break;
		}
		i=mapa[i];
	}
	if(sw){
		printf("YES\n" );
	}else{
		printf("NO\n");
	}
	return 0;
}