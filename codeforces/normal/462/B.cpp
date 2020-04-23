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
using namespace std;
//unordered_map<int,int> unmap;
int main(){
	int n,k;
	sc("%d %d",&n,&k);
	getchar();
	string cade;
	cin>>cade;
	map<char,int> mapa;
	for(int i=0;i<cade.size();i++){
		mapa[cade[i]]++;
	}
	map<char,int> ::iterator it=mapa.begin();
	vector<int> vec;
	for(;it!=mapa.end();it++){
		//cout<<it->f<<" "<<it->s<<endl;
		vec.pb(it->s);
	}
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	int ans=0;
	int ans2=0;
	int j=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i]+ans < k){
			ans+=vec[i];
			ans2+=(vec[i]*vec[i]);
			j=i;
		}
	}
	if(ans < k){
		for(int i=j;i<vec.size();i++){
			if(ans < k){
				ans++;
				ans2+=1;
			}
		}
	}
	printf("%d\n",ans2 );
	return 0;
}