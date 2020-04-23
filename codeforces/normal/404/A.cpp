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
	int n;
	sc("%d",&n);
	string mat[n][n];
	string cade;
	getchar();
	for(int i=0;i<n;i++){
		cin>>cade;
		for(int j=0;j<n;j++){
			mat[i][j]=cade[j];
		}
	}
	string d1="";
	for(int i=0;i<n;i++){
		d1=d1+mat[i][i];
	}
	int j=0;
	string d2="";
	for(int i=n-1;i>=0;i--){
		d2=d2+mat[j][i];
		if(mat[j][i]!=mat[0][0]){
			break;
			n=1;
		}
		j++;
	}
	if(n==1){
		cout<<"NO"<<endl;
	}else{
		string f(mat[0][0]);
		bool sw=true;
		if(d1.compare(d2)==0){
			string dat="";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i!=j && i+j!=n-1 ){
						if(sw){
							dat=mat[i][j];
							sw=false;
						}else{
							if(dat.compare(mat[i][j])!=0 || f.compare(mat[i][j])==0){
								cout<<"NO"<<endl;
								return 0;
							}
						}
					}
				}
			}
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}