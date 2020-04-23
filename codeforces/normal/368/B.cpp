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
	//r(input);
	int n,m,dat;
	sc("%d %d",&n,&m);
	vector<int> vec,vec2;
	int co=0;
	set<int> aux;
	for(int i=0;i<n;i++){
		sc("%d",&dat);
		vec.pb(dat);
		vec2.pb(0);
	}
	int num=0;
	for(int i=n-1;i>=0;i--){
		if(aux.find(vec[i])==aux.end()){
			aux.insert(vec[i]);
			num++;
		}
		vec2[i]=num;;
	}
	int query;
	for(int i=0;i<m;i++){
		sc("%d",&query);
		printf("%d\n",vec2[query-1]);
	}
	return 0;
}