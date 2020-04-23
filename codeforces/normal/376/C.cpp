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
#define r(input) freopen("c.in","r",stdin)
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
	lld lec[1000010];
	char c;
	lld cota=0;
	while((c = getchar()) != '\n' && c!=EOF){
		lec[cota]=c-'0';cota++;
	}
	sort(lec,lec+cota);
	vector<lld> vec,vec1;

	vector<lld> div;
	lld mul=7;
	vector<vector<lld> > vec2;
	lld num=0,aux=0;
	while( mul <= 1000000){
		div.pb(mul);
		aux=mul;
		vec2.pb(vector<lld>());
		while(aux > 0){
			vec2[num].pb(aux%10);
			aux/=10;
		}
		sort(vec2[num].begin(),vec2[num].end());	
		mul+=7;
		num++;
	}	

	lld ggg=0;
	for(int i=0;i<num;i++){
		ggg=0;
		if(vec2[i].size() > cota +2  )break;
		if(vec2[i].size() == cota ){
			for(int j=0; j < vec2[i].size();j++){
				if(lec[j] == vec2[i][j]){
					ggg++;
				}
			}
		}

		if(ggg==cota){
			cout<<div[i]<<endl;
			return 0 ;
		}
	}
	cout<<0<<endl;
	return 0;
}