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
#define pf printf
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
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define lim 100000 
using namespace std;
int main(){
	//r(input);
	int x,y;
	sc("%d %d",&x,&y);
	vector<string> mat;
	string cade;
	getchar();
	for(int i=0;i<x;i++){
		getline(cin,cade);
		mat.pb(cade);
	}
	/////////-
	int ans=0;
	int X=0,Y=0;
	
	for(int i=0;i<x;i++){
		bool sw=true;
		for(int j=0;j<y;j++){
			if(mat[i][j]=='S'){sw=false;break;}
		}
		if(sw){
			for(int j=0;j<y;j++){
				mat[i][j]='*';
			}
		}
	}

	for(int i=0;i<y;i++){
		bool sw=true;
		for(int j=0;j<x;j++){
			if(mat[j][i]=='S'){sw=false;break;}
		}
		if(sw){
			for(int j=0;j<x;j++){
				mat[j][i]='*';
			}
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			//cout<<mat[i][j];
			if(mat[i][j]=='*')ans++;
		}
		//cout<<endl;
	}

	printf("%d\n",ans );
	return 0;
}