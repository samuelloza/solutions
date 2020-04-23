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
	int n,aux=0;
	sc("%d",&n);
	if(n==1){
		cout<<1<<endl;
		cout<<"C"<<endl;
	}else{

		bool mat[n+1][n+1];
	// (x + 1, y), (x–1, y), (x, y + 1) and (x, y–1).
		memset( mat,false,sizeof mat);
		bool sw=false;
		if(n%2!=0)sw=true;
		aux=0;
		for(int j=0;j<n;j++){
			if(sw==true){
				int jj=j,i=0;
				for(;jj>=0;jj--,i++){
					mat[i][jj]=true;
					aux++;
				}
			}
			sw=!sw;
		}
		sw=true;
		for(int i=2;i<n;i++){
			if(sw==true){
				int ii=i,j=n-1;
				for(;j>0 && ii<n;j--,ii++){
					mat[ii][j]=true;
					aux++;
				}
			}
			sw=!sw;
		}

		cout<<aux<<endl;
		for (int i = 0; i < n; i++){
			for(int j=0;j<n;j++){
				if(mat[i][j])cout<<"C";
				else cout<<".";
			}
			cout<<endl;
		}
	}
	return 0;
}