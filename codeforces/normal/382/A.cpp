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
	string cade,cade1;
	string aa="",bb="";
	cin>>cade;
	cin>>cade1;
	int a=0,b=0;
	bool sw=true;
	for(int i=0;i<cade.size();i++){
		if(cade[i]=='|'){
			sw=false;
		}else{
			if(sw){
				aa+=cade[i];
				a++;
			}else {
				bb+=cade[i];b++;
			}
		}
	}
	if(a==b && cade1.size()%2==1){
		cout<<"Impossible"<<endl;
	}else{
		bool flag=false;
		int dif=0;
		if(a > b){
			dif=abs(a-b);
			flag=true;
		}else dif=abs(b-a);
		string aux="";
		int i=0;
		for(;i<cade1.size();i++){
			if(!dif){
				break;
			}
			dif--;
			aux+=cade1[i];
		}
		if(flag){
			bb+=aux;
		}else aa+=aux;

		if(aa.size() == bb.size()){
			bool ff=true;
			for(;i<cade1.size();i++){
				if(ff)aa+=cade1[i];
				else bb+=cade1[i];
				ff=!ff;
			}
		}
		if(aa.size()==bb.size()){
			cout<<aa<<"|"<<bb<<endl;
		}else cout<<"Impossible"<<endl;

	}
	return 0;
}