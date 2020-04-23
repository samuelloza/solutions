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
#define 	r(input) freopen("com.in","r",stdin)
#define 	w(output) freopen("sa.out","w",stdout)
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
	//r(input);
    //  w(outout);
	int n;
	char c;
	sc("%d",&n);
	getchar();
	string cade;
	while(n--){
		int ans=0;
		stack<pair<int, pair<int,int> > > s;
		stack<int> index;
		cin>>cade;
		int ma=0;
		bool flag=true;
		int a=0;
		int b=0;
		int old=0;
		for(int i=0;i<cade.size();i++){
			c=cade[i];
			if(c=='<'){
				index.push(i);
			}else{
				if(c=='>'){
					flag=true;
					if(index.size()==0){
						break;
					}else{						
						index.pop();
						if(index.size()==0){
							ma+=(old*2)+2;
							//cout<<old<<" "<<ma<<endl;
							old=0;
						}else{
							old++;
						}
					}
				}
			}
		}
		printf("%d\n",ma );
	}
	return 0;
}
/*
3
<<>
2 wa is correc 0
1
<<<>>><<<>>><<<<<<<<<<<<<<<<<<<<
*/


/*debug erro*/
//><<<><><><<<>>><>>>>><>><<><<<>>>>>>>>>><<<<<><	yes 18
//<><><><><>><<><><><<<>>>><>>>><<><<<<<<>>>>>>>>>>>>><<<<<><	yes 16
//<<<>>><<<<>>>>>>>>>>>>>>>>><<<>	yes 8
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>><>>>>>>>>>>>>>>>>>>>>>>><><><><>>>>>>>>><	yes 2
//><>>>>>>><><><><>>>>>>>>><	yes 2
//<<<<<<<<<<<<<<<<<<<<<><><<<<<<<<<<<<<<<<<<<<<<<>>> yes	6
//<<<<<<<<<<<<<<<<<<<<<><><<<<<><><><<<<<<<<<<<<<<<<<<>>>	yes 	6
//<<<<<<<<<<<<<<<<<<<<<><><<<<<><><><<<<<<<<<<<<<<<<<<>>> yes 6

//<<<>>><<<>>><<<<<<<<<<<<<<<<<<<<	12
//<<<>><>>							8
//<<>								0