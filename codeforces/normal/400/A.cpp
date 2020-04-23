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
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	int n,m;
	sc("%d,%d",&n,&m);
	vector<string> vec;
	string cade;
	vector<int> dist(n,0);
	vector<int> pos(n,0);
	vector<int> vic(n,0);
	getchar();getchar();
	for(int i=0;i<n;i++){
		cin>>cade;
		for(int j=0;j<cade.size();j++){
			if(cade[j]=='G'){
				pos[i]=j;
			}
			if(cade[j]=='S'){
				vic[i]=j;
			}
		}
	}
	int mu=0;
	for(int i=0;i<n;i++){
		if(pos[i] > vic[i]){
			cout<<-1<<endl;
			return 0;
		}else{
			mu=max(mu,vic[i]-pos[i]);
		}
	}
	cout<<mu<<endl;
	return 0;
}