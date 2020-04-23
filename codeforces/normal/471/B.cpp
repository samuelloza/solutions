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
	int n;
	sc("%d",&n);
	int tmp;
	vector<pair<int,int > > vec;
	int i=1;
	while(n--){
		sc("%d",&tmp);
		vec.pb(mp(tmp,i)),i++;
	}
	sort(vec.begin(),vec.end());
	int mi=1;
	set<vector< int > > vec2;
	for(int i=0;i<vec.size();i++){
		vector< int > v;
		if( vec[i].f==vec[i-1].f && i > 0){	
			swap(vec[i],vec[i-1]);
			for(int j=0;j<vec.size();j++){
				//v.pb(vec[j]);
				v.pb(vec[j].s);
				//cout<<vec[j].s<<" "<<vec[j].f<<endl;
			}
			//cout<<endl<<endl;
		}else{
			for(int j=0;j<vec.size();j++){
				//v.pb(vec[j]);
				v.pb(vec[j].s);
				//cout<<vec[j].s<<" "<<vec[j].f<<endl;
			}
			//cout<<endl<<endl;
		}
		vec2.insert(v);
		//cout<<v.size()<<endl;
	}
	if(vec2.size() >= 3){	
		cout<<"YES"<<endl;
		set<vector< int > > :: iterator it=vec2.begin();
		int i=0;
		for(;it!=vec2.end() && i<3;it++,i++){
			vector<int> aux=(*it);
			cout<<aux[0];
			for(int j=1;j<aux.size();j++){
				cout<<" "<<aux[j];
			}
			cout<<endl;
		}
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}