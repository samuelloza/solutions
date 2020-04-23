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
#define mod 1000000009
using namespace std;
int n;
vector<int> vec1;
vector<pair <int,int> >  vec;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.f < b.f;
}

bool busca(int x,int y){
	for(int i=0;i<n;i++){
		if(!(vec[i].f== x && vec[i].s ==y) && !(vec[i].f > x && vec[i].f < y && vec[i].s > x && vec[i].s <y )) {
			if(vec[i].f > x && vec[i].f < y && vec[i].s > x && vec[i].s > x && vec[i].s > y) {
				//vec f dentro
				//cout<<x<<" xx "<<y<<"  "<<vec[i].s<<endl;
				return true;

			}else{
				if(vec[i].s > x && vec[i].s <y  && vec[i].f > x && vec[i].f > y){
					//vec s dentro
					return true;
				}
			}

		}
	}
	return false;
}
int main(){
	int dat=0;
	while(cin>>n){
		vec.clear();
		vec1.clear();
		for(int i=0;i<n;i++){
			cin>>dat;
			vec1.pb(dat);
		}
		int old=0;
		for(int i=1;i<n;i++){
			vec.pb(mp(vec1[i-1],vec1[i]));
		}
		sort(vec.begin(),vec.end(),cmp);
		bool sw=false;
		for(int i=1;i<n;i++){
			if(busca(vec1[i-1],vec1[i])){
				sw=true;
			}
		}
		if(sw)printf("yes\n");
		else printf("no\n");

	}
	return 0;
}