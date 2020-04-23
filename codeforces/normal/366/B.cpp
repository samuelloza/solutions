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
#define mp make_pair
#define r(input) freopen("b.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define lim 100000 
using namespace std;
int main(){
	//r(input);
	int n,k,dat;
	sc("%d %d",&n,&k);
	vector<int> vec;
	for(int i=0;i<n;i++){
		sc("%d",&dat);
		vec.pb(dat);
	}
	int min=1000000000;
	int j=0,pos=0;
	vector<int> ans;
	int sum=0;
	for(int i=0;i<k;i++){
		j=i;
		sum=0;
		while(j<n){
			sum+=vec[j];
			j+=k;
		}

		ans.pb(sum);
	}
	for(int i=0;i<ans.size();i++){
		if(ans[i]<min){
			min=ans[i];
			pos=i;
		}
	}
	printf("%d\n",pos+1);
	return 0;
}