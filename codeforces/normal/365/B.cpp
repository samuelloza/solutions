#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <cstring>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))
int main(){
	//freopen("b.in","r",stdin);
	int  n,k;
	long long int l=1,r=1;
	scanf("%d",&n);
	//while(scanf("%d",&n)!=EOF){
		long long int vec[n+1];
		for(int i=0;i<n;i++){
			scanf("%lld",&vec[i]);
		}
		if(n==1){cout<<"1"<<endl;return 0;}
		int ans=0;
		l=r=0;
		bool sw=false;
		for(int i=2;i<n;i++){
			if(vec[i]==vec[i-1]+vec[i-2]){
				if(!sw){
					l=i+1;
					sw=true;
				}
				r=i+1;
			}else{
				if(sw){
					ans=max(ans,r - l +1);
				}
				sw=false;
			}
		}
		if(sw){ans=max(ans,r - l +1);}
		cout<<ans+2<<endl;
	//}
	return 0;
}