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
	int mat[n+1][ m+1 ];
	int vec[m+1];
	memset(mat,-1,sizeof mat);
	int eq=0;
	int s=0,r=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0){
				sc("%d",&mat[i][j]);
				if(mat[i][j]==0)s++;
				else r++;
			}else{
				sc("%d",&vec[j]);
				if(vec[j]==1)r++;
				else s++;
			}
		}

		if(i!=0){
			bool sw=true;
			for(int j=0;j<m;j++){
				if(mat[i-1-eq][j]!=vec[j]){
					sw=false;
					break;
				}
			}
			if(!sw){
				for(int j=0;j<m;j++){
					mat[i-eq][j]=vec[j];
				}
			}else eq++;
		}
	}
	if(s==n*m or r==n*m){
		cout<<n<<endl;
		return 0;
	}
	int old=n;
	n=n-eq;
	int i=0;
	int j=0;
	int ii=n-1;
	int jj=0;
	eq=0;
	bool flag=true;
	int c=110;
	while(c--){
		ii=n-1;
		for(i=0;i<n/2;i++,ii--){
			flag=false;
			for(j=0;j<m;j++){
				if(mat[i][j]!=mat[ii][j]){
					flag=true;
					break;
				}
			}
			if(flag){
				;;
			}else{
				n--;
				eq++;
			}
			/*cout<<" ----------------- "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<mat[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<" -------------- "<<endl;*/
		}
	}
	cout<<n<<endl;
	return 0;
}