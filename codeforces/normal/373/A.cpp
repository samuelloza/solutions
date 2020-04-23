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
	#ifndef ONLINE_JUDGE
 	//r(input);
	#endif
	int k;
	scanf("%d",&k);
	getchar();
	int vec[10];
	string cade;
	memset(vec,0,sizeof vec);
	for(int h=0;h<4;h++){
			getline(cin,cade);
		for(int i=0;i<4;i++){
			if(cade[i]>='0' && cade[i]<='9')
				vec[cade[i]-'0']++;
		}
	}
	for(int i=1;i<=9;i++){
		if(vec[i]!=0){
			if(k*2 < vec[i]){
				printf("NO\n");return 0;
			}
		}
	}
	printf("YES\n");
	return 0;
}