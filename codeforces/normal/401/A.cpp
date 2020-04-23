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
	int n,x;
	sc("%d %d",&n,&x);
	vector<int> vec(x,0);
	int dat;
	int ans=0;
	for(int i=0;i<n;i++){
		sc("%d",&dat);
		ans+=dat;
	}
	for(int i=0;i<x;i++){
		vec[i]=i+1;
	}
	ans=abs(ans);
	int so=0;
	vector<int>::iterator low,up;
	int ansss=0;
	while(true && ans!=0){
		low=lower_bound (vec.begin(), vec.end(), ans);
		if(low==vec.end())
			so=vec[(low - vec.begin())-1];
		else so=vec[(low - vec.begin())];
		
		if(ans-so==ans){
			up= upper_bound (vec.begin(), vec.end(), ans);
			if(up==vec.begin())
				so=vec[(low-vec.begin())-1];
			else so=vec[(up - vec.begin())];
		}
		//cout<<so<<" sol "<<ans<<endl;

		ans-=so;
		ansss++;
		//break;
		if(ans==0)break;
		if(ans <=-1)break;
	}
	printf("%d\n",ansss );
	/*
	sort(vec.begin(),vec.end());
	if(ans2 > x){
		int res=0;
		bool sw=false;
		bool sw2=false;
		while(true){
			for(int i=0;i<vec2.size();i++){
				vec2[i]+=vec2[i];
				if(vec2[i]==ans2){sw=true;break;}
				else if(vec2[i] > ans){
					sw2=true;
					break;
				}
				res++;
			}
			if(sw or sw2){
				break;
			}
		}
		if()
	}else{

	}
*/


	return 0;
}