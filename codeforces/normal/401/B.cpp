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
#include <unordered_map>


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
int main(){
	int x,k,dat,a,b;
	sc("%d %d",&x,&k);
	unordered_map<int,int> unmap;
	for(int i=0;i<k;i++){
		sc("%d",&dat);
		if(dat==1){
			sc("%d %d",&a,&b);
			unmap[a]++;
			unmap[b]++;
		}else{
			sc("%d",&a);
			unmap[a]++;
		}
	}
	int tot=unmap.size();
	if(tot==x-1){
		cout<<"0 0"<<endl;	
	}else{

		int f=x-tot;
		int ans2=f;
		int ans1=(f/2)+(f%2);	
		if(f%2==0){
			ans2--;
		}
		if(ans1%2!=0)
			ans1++;
		if(x%2==0)
			ans1--;
		cout<<ans1<<" "<<ans2<<endl;
	}

	
	return 0;
}