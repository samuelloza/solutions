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
vector<int> vec;
bool valido(){
	for(int i=0;i<vec.size();i++){
		if(vec[i]!=0)return false;
	}
	return true;
}
int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	int n,dat;
	sc("%d",&n);
	for (int i = 0; i < n; i++){
		sc("%d",&dat);
		vec.pb(dat);
	}
	bool sw=true;
	bool flag=false;
	int conta=0;
	while(!valido()){ 
		if(sw){
			int i=0;
			for(;i<n;i++){
				if(i==0){
					if(vec[i]==0)cout<<"R";
					else{ vec[i]--; cout<<"PR";}
				}else{
					if(vec[i]!=0){cout<<"P";vec[i]--;}
					if(i+1 < n )cout<<"R";
				}
			}
		}else{
			for(int i=n-1;i >=0;i--){
				if(i==n-1){
					cout<<"L";
				}else{

					if(vec[i]!=0){cout<<"P";vec[i]--;}
					else {if(i!=0)cout<<"L";
				}
			}
		}
	}
	sw=!sw;
	conta++;
}
cout<<endl;
return 0;
}