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
	getchar();
	string cade;
	vector<string> vec;
	for(int i=0;i<n;i++){
		cin>>cade;
		vec.pb(cade);
	}
	int ans=0;
	bool flag=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vec[i][j]=='x'){
				ans=0;
				for(int g=0;g<n;g++){
					if(vec[i][g]=='o'){
						flag=true;
						ans++;
					}
				}
				for(int g=0;g<n;g++){
					if(vec[g][j]=='o'){
						flag=true;
						ans++;
					}
				}
				if(ans%2==1){
					printf("NO\n");
					return 0;
				}
			}
		}
	}
	if(n==1){
		printf("NO\n");
	}else if(flag && ans%2==0)
	printf("YES\n");
	else printf("NO\n");

	return 0;
}