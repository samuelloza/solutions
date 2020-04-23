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
#define pf printf
#define pi 2*acos(0.0)
#define f first
#define s second
#define sz size()
#define r(input) freopen("357.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define mp make_pair
#define lim 100000 
using namespace std;
long long int dp[7489];
int money[]={1,5,10,25,50};
void coinchange(int sum){
	clr(dp);
	dp[0]=1;
	for(int i=0;i<5;i++){
		for(int j=money[i];j<=sum;j++){
			dp[j]+=dp[j-money[i]];
		}
	}
}
int main(){
	//r(input);
	int k;
	coinchange(7489);
	while(sc("%d",&k)!=EOF){
	printf("%d\n", dp[k]);
	}
	return 0;
}