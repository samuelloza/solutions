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
bool prime[1000000];
void gene(){
	memset(prime,false,sizeof prime);
	prime[1]=true;
	prime[2]=false;
	for(int i=2;i<1000000;i++){
		if(!prime[i]){
			for(int j=i+i;j<1000000;j+=i){
				prime[j]=true;
			}
		}
	}
}
int main(){
	gene();
	int n;
	sc("%d",&n);
	int a=4;
	int b=4;
	for(;a<1000000;a++){
		if(prime[a]){
			for(b=4;b<1000000;b++){
				if(prime[b]){
					if(a+b > n)break;
					if(a+b==n){
						cout<<a<<" "<<b<<endl; 
						return 0;
					}
				}
			}
		}
	}
	return 0;
}