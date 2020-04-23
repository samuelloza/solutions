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
	string cade;
	cin>>n>>cade;
	map<char,int> mapa;
	for(int i=0;i<cade.size();i++){
		mapa[cade[i]]++;
	}	
	map<char,int> ::iterator it=mapa.begin();
	string ne="";
	for(;it!=mapa.end();it++){
		if(it->second%n!=0){
			printf("-1\n");
			return 0;
		}else{
			for(int i=0;i<it->second/n;i++){	
				ne+=it->first;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ne;
	}
	cout<<endl;
	return 0;
}