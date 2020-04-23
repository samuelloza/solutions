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
#define 	r(input) freopen("a.in","r",stdin)
#define 	w(output) freopen("a.out","w",stdout)
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
	string cade;
	cin>>cade;
	int a=0;
	int b=0;
	for(int i=0;i<cade.size();i++){
		if(cade[i]==toupper(cade[i])){
			a++;
		}
		if(cade[0]==tolower(cade[0]) && cade[i]==toupper(cade[i])){
			b++;
		}
	}
	if(cade.size()==1 && cade[0]==tolower(cade[0])){
		cout<<(char)toupper(cade[0])<<endl;
	}else{
		
		if(b+1==cade.size() && b!=0){
			for(int i=0;i<cade.size();i++){
				if(i!=0)cout<<(char)tolower(cade[i]);
				else cout<<(char)toupper(cade[i]);
			}
			cout<<endl;
		}else if(a==cade.size()){
			for(int i=0;i<cade.size();i++){
				cout<<(char)tolower(cade[i]);
			}
			cout<<endl;
		}else cout<<cade<<endl;
	}
	return 0;
}