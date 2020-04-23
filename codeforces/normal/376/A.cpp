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
#define r(input) freopen("a.in","r",stdin)
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
	string cade;
	getline(cin,cade);
	lld a=0,b=0,a1,b1;
	vector<pair<lld,lld> > vec,vec1;
	bool sw = true;
	lld center;
	for(int i=0;i<cade.size();i++){
		if(sw){
			if(cade[i]=='='){
				a1++;
			}else if(cade[i]-'0' >= 0 && cade[i]- '0' <= 9){
				vec.pb(mp(i+1,cade[i]-'0'));
			}else{
				center=i+1;
				sw =false;
			}

		}else{
			if(cade[i]=='='){
				b1++;
			}
			if(cade[i]-'0' >= 0 && cade[i]- '0' <= 9){
				vec1.pb(mp(i+1,cade[i]-'0'));
			}
		}
	}
	lld A=0,B=0;
	for(int i=0;i<vec.size();i++){
		A+=((vec[i].s) * abs(vec[i].f - center));
	}	
	for(int i=0;i<vec1.size();i++){
		B+=((vec1[i].s) * abs(vec1[i].f - center));
	}
	if(A==B)printf("balance\n");
	else if(A > B) printf("left\n");
	else printf("right\n");
	return 0;
}