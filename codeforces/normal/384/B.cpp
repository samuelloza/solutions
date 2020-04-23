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
	#ifndef ONLINE_JUDGE
 	//r(input);
	#endif
	int n,m,k;
	sc("%d%d%d",&n,&m,&k);
	int mat[n+1][m+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sc("%d",&mat[i][j]);
		}
	}
	cout<<(m*(m-1))/2<<endl;
	if(m==1){
		;
	}else{
		if(k==0){
			for(int i=1;i<=m;i++){
				for(int j=i+1;j<=m;j++){
					cout<<i<<" "<<j<<endl;
				}
			}
		}else {
			for(int i=m;i>=1;i--){
				for(int j=i-1;j>=1;j--){
					cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
	return 0;
}