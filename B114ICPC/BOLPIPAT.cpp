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
	//"I" para Piedra, "A" para Papel y "T" para Tijera.
	int t;
	sc("%d",&t);
	while(t--){
		int n;
		string cade;
		sc("%d",&n);
		getchar();
		cin>>cade;
		int a=0;int b=0;
		for(int i=0;i<2*n;i+=2){
			if(cade[i]=='I' && (cade[i+1]=='T')){
				a++;
			}else if(cade[i]=='T'&&cade[i+1]=='A'){
				a++;
			}else if(cade[i]=='A' && cade[i+1]=='I'){
				a++;
			}else if(cade[i]==cade[i+1]){
				;
			}else{
				b++;
			}
		}

		if(a > b ){
			printf("Angela gana\n");
		}else if(a==b){
			printf("Empate\n");
		}else{
			printf("Bernardo gana\n");
		}
	}
	return 0;
}
