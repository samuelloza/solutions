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
	int vec[n+1]; 	
	int index=-1;
	int ans=0;
	for(int i=0;i<n;i++){
		sc("%d",&vec[i]);
		if(vec[i]==1 &&index==-1){
			index=i;
			ans=0;
			//index++;
		}
	}
	int a,b;
	int lim=0;
	while(index < n && lim <n){
		if(vec[index]==1){
			ans++;
			index++;
			//cout<<index<<" -"<<n<<" "<<ans<<endl;
		}else{
			int i=index;
			int mi=1000000;
			int sol=0;
			while(i<n && vec[i]!=1){
				i++;
				sol++;
			}
			if(vec[i]==1){
				int j=2;
				if(i < j){
					index=i+1;
					ans+=sol;
				//	cout<<index<<" ** "<<n<<" "<<ans<<endl;
				}else{
					index=i+1;
					ans+=2;
					//cout<<index<<" ++ "<<n<<" "<<ans<<endl;
				}
			}
		}
		lim++;
	}
	printf("%d\n",ans);
	return 0;
}