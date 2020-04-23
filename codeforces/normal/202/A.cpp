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
	int vec[n];
	bool flag=true;
	int sum=0;
	int a,b,c;
	a=b=c=0;
	for(int i=0;i<n;i++){
		sc("%d",&vec[i]);
		if(vec[i]==25){
			a++;
		}
		if(vec[i]==50){
			if(a > 0){
				a--;
				b++;
			}else{
				flag=false;
			}
		}
		if(vec[i]==100){
			if(b > 0 && a > 0){
				b--;
				a--;
				c++;
			}else if(a >= 3){
				a-=3;
				c++;
			}else  flag=false;
		}

	}
	if(!flag)printf("NO\n");
	else printf("YES\n");
	return 0;
}