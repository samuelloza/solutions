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
int X[]={0,0,-1,1};
int Y[]={1,-1,0,0};
'U': go up, (x, y)  →  (x, y+1);
'D': go down, (x, y)  →  (x, y-1);
'L': go left, (x, y)  →  (x-1, y);
'R': go right, (x, y)  →  (x+1, y).
string vec="0123";
void dfs(int a,int b,string cade){
	if(a>=-10000000&&a<=100000000&&b>=-100000000&&b<=100000000){

		for(int i=0;i<cade.size();i++){
			int tmp=0;
			for(int j=0;j<vec.size();j++){
				if(vec[j]==cade[i]){
					tmp=j;
					break;
				}
			}
			dfs(X[tmp]+a,Y[tmp]+b,cade);
		}
	}
}
int main(){
	int i,j;
	i=j=0;
	string ca;
	sc("%d %d",&i,&j);
	getchar();
	cin>>ca;
	for(int i=0;i<ca.size();i++){		
		if(i >0 && j>0){
			if(ca[vec[i]]=='R')
		}
	}
	return 0;
}