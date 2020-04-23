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
#define mod = 1000000009;
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	r(input);
	#endif
	int m,c;
	while(sc("%d",&m)!=EOF){
		map<int,int> dat;
		vector< pair <int, int > > vec;
		for(int i=0;i<m;i++){
			sc("%d",&c);
			vec.pb(mp(c,i+1));
		}
		int x,y;
		sc("%d %d",&x,&y);
		int ans=1;
		int ansx=0,ansy=0;
		int sol=0;
	//	for(int j=0;j<m;j++){
		for(int i=0;i<m;i++){
			
			for(int k=0;k<m;k++){
				if( vec[k].second < ans ){
					ansx+=vec[k].first;
				}
				if ( vec[k].second >= ans){
					ansy+=vec[k].first;
				}
			}

			if(ansx >= x&& ansx<=y && ansy >= x && ansy<= y){
				//cout<<m<<endl;
				//cout<<ansx<<"    "<<ansy<<endl;
				//cout<<ans<<endl;
				sol=ans;
				break;
			}
				//cout<<ansx<<" -------- "<<ansy<<endl;
			ansx=ansy=0;
			ans++;
		}
	//	}
		printf("%d\n",sol);
		//cout<<"---------------------"<<endl;
	}
	return 0;
}