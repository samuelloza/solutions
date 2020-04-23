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

#define ll long long
#define lld long long int
#define sc scanf
#define pi 2*acos(0.0)
#define f first
#define s second
#define sz size()
#define mp make_pair
#define r(input) freopen("b.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define inf 1000000000 
#define mod = 1000000009;
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	lld w,m,k;
	cin>>w>>m>>k;
	vector<lld > vec,vec1;
	vector<lld> dig(20,0);
	dig[1]=1;
	for(lld i=1;i<=16;i++){
		vec.pb(i);
		vec1.pb(pow(10,i)-1);
		if(i>1)dig[i-1]+=i;
	}
	lld ans=m,old=0,aux=1,ans2;
	lld ans1=0;
	vector<lld> dig2=dig;
	for(int i=1;i<=16;i++){
		dig2[i-1]*=k;
	}
	if(w==1000000000000000 && k==1  ){
		cout<<(w-m)<<endl;
	}else{
		
		while(true){
		//search
			lld tamdig=0;
			for(int i=1;i<=16;i++){
				if(ans>=vec[i-1] && ans<=vec1[i-1]){
					tamdig=i;
					break;
				}
			}
			if((tamdig+old)*k <= w){
				old+=tamdig;
				ans1++;
			}else break;
			ans++;
		}
		cout<<ans1<<endl;	
	}
	return 0;
}