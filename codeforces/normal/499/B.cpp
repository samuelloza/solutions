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
	int n,m;
	sc("%d %d",&n,&m);
	getchar();
	string a,b;
	map<string,string> mapa;
	map<string,string> mapa2;
	while(m--){
		cin>>a>>b;
		mapa[a]=b;
		mapa2[b]=a;
	}
	
	vector<string> vec;
	while(n--){
		cin>>a;
		vec.pb(a);
	}
	a="";
	b="";
	vector<string> ans;
	for(int i=0;i<vec.size();i++){
		b=mapa[vec[i]];
		a=mapa2[vec[i]];
		if(a.size()==0){
			a=mapa2[b];
		}
		if(b.size()==0){
			b=mapa2[a];
		}
		if(b.size() == a.size()){
			ans.pb(a);
		}else if(a.size() < b.size()){
			ans.pb(a);

		}else{
			ans.pb(b);
		}
	}	


	cout<<ans[0];
	for(int i=1;i<ans.size();i++){
		cout<<" "<<ans[i];
	}
	cout<<endl;
	return 0;
}