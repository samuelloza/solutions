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
	vector<string> vec;
	vec.pb("qwertyuiop");
	vec.pb("asdfghjkl;");
	vec.pb("zxcvbnm,./");
	string cade;
	cin>>cade;
	string aux;
	cin>>aux;
	if(cade.compare("R")==0){
		for(int i=0;i<aux.size();i++){
			bool sw=true;

			for(int j=0;j<vec.size()&&sw;j++){
				for(int k=0;k<vec[j].size()&&sw;k++){
					if(aux[i]==vec[j][k]){
						if(k==0)cout<<vec[j][vec[i].size()-1];
						else
						cout<<vec[j][k-1];
						sw=false;
						break;
					}
				}
			}

		}
	}else{
		for(int i=0;i<aux.size();i++){
			bool sw=true;
			for(int j=0;j<vec.size()&&sw;j++){
				for(int k=0;k<vec[j].size()&&sw;k++){
					if(aux[i]==vec[j][k]){
						if(k==vec[j].size()-1)cout<<vec[j][0];
						else cout<<vec[j][k+1];
						sw=false;
						break;
					}
				}
			}

		}
	}
	cout<<endl;
	return 0;
}