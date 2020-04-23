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
#define 	r(input) freopen("b.in","r",stdin)
#define 	w(output) freopen("b.out","w",stdout)
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
	int a,b,w,x,c;
	sc("%d %d %d %d %d",&a,&b,&w,&x,&c);
	int mov=1;
	int xx=0;
	int yy=0;
	while(true){
		if(c<=a){
			if(mov-1+xx-1 < 0 )cout<<"0"<<endl;
			else cout<<mov-1+xx-1-yy<<endl;
			break;
		}
		
		if(b>=x){
			int res=b - x ;
			b=res;
			c-=res;
			mov+=res;
			xx++;
		}else {
			if(b<x){
				a--;
				int hh=x-b;
				b=w-hh;
				if(b< x){
					hh=x-b;
					b=w-hh;
					a--;
					c--;
					mov++;
				}
				yy++;
			}
		}

		c=c-1;
		mov++;
	}
	return 0;
}

/*
1 2 3 2 6 ---- 
1 0 3 2 5 *** 
0 1 3 2 4 *** 
-1 2 3 2 3 ---- 
-1 0 3 2 2 *** 
-2 1 3 2 1 *** 
-3 2 3 2 0 ---- 
-3 0 3 2 -1 *** 
-4 1 3 2 -2 *** 
-5 2 3 2 -3 ---- 
-5 0 3 2 -4 *** 
-6 1 3 2 -5 *** 
-7 2 3 2 -6 ---- 



*/