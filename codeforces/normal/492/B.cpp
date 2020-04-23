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
#include <iomanip> 
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
	int n,l;
	sc("%d %d",&n,&l);
	vector<int> vec;
	int tmp;
	bool final=false;
	for(int i=0;i<n;i++){
		sc("%d",&tmp);
		vec.pb(tmp);
		if(tmp==l)final=true;
	}
	sort(vec.begin(),vec.end());

	vector<double> rank;
	double ini,fin=0.0;
	bool sw=false;
	for(int i=0;i<n;i++){
		if(i==0){
			if(vec[i]==0){
				sw=true;
				ini=vec[i];
			}else{
				ini=0.0;
			}
		}else{
			ini=(double)vec[i-1];
		}
			fin=(double)vec[i];
		if(!sw && i==0)rank.pb((double)(fin-ini));
		else rank.pb((double)(fin-ini)/2.0);

	}
	if(!final)rank.pb((double)(l-vec[vec.size()-1]));

	sort(rank.begin(),rank.end());
	if((double)rank[rank.size()-1] == 1000000000){
		cout<<1000000000<<endl;
	}else{	
		cout.precision(10);
		cout << fixed << (double)rank[rank.size()-1] << endl;
	}
	return 0;
}