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
	int x1,x2,y1,y2;
	sc("%d %d %d %d",&x1,&y1,&x2,&y3);
	int aux=hypot(x2-x1,y2,y1);
	if(x1==x2){
		if(x1+d>=-1000 && x2+d<=1000){
			cout<<x1+d<<" "<<y1<<" "<<x2+d<<endl;
		}else{
			if(x1-d>=-1000 && x2-d<=1000){
				cout<<x1-d<<" "<<y1<<" "<<x2-d<<endl;
			}
		}
	}
	if(y1==y2){
		if(y1+d>=-1000 && y2+d<=1000){
			cout<<x1<<" "<<y1+d<<" "<<x2+d<<" "<<y2+dendl;
		}else{
			if(x1-d>=-1000 && x2-d<=1000){
				cout<<x1<<" "<<y1-d<<" "<<x2<<" "<<y2-d<<endl;
			}
		}
	}
	if(x1 > x2){
		
	}
	return 0;
}