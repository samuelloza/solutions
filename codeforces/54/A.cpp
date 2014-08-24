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
#define 	maxall(v) *max_element(v.begin(),v.end())
#define 	minall(v) *min_element(v.begin(),v.end())
#define 	Sort(v) sort(v.begin(),v.end())
#define 	clr(a)  memset(a,0,sizeof(a))
#define 	pb push_back
#define 	inf 1000000000 
#define 	mod 1000000009
using namespace std;
int main(){
	string cade;
	cin>>cade;
	string vec="hello";
	int vec2[]={0,1,2,3};
	int h=0;
	//unordered_map<char,int> unmap;
	string ori="";
	for(int i=0;i<cade.size();i++){
		if(cade[i]==vec[h]){
			h++;
			if( h ==vec.size()){
				break;
			}
		}
	}
	if(h ==vec.size()){
		printf("YES\n");
		return 0;
	}else{
		printf("NO\n");
		return 0;
	}//hlelo
}