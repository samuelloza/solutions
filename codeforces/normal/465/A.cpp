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
	cin>>cade;
	int vec[cade.size()];
	int ac=0;
	int sol=0;
	int ans=0;
	for(int i=0;i<n;i++){
		if(i==0){
			if(cade[i]-'0' + 1 ==2){
				ac=1;
				sol=0;
			}else{
				ac=0;
				sol=1;
			}
		}else{
			if(cade[i]-'0'+ac==2){
				ac=1;
				sol=0;
			}else{
				if(cade[i]-'0'+ac==0){
					ac=sol=0;
				}else{
					ac=0;
					sol=1;
				}
			}
		}
		//cout<<cade[i]-'0'+ac<<" "<<sol<<" ac "<<ac<<" "<<sol <<endl;
		if(sol!=cade[i]-'0'){
			ans++;
		}	
	}
	printf("%d\n",ans );


	return 0;
}