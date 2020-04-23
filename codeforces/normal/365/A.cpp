#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <cstring>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	string cade;
	getchar();
	long long int conta=0,aux=0;
	while(n--){
		getline(cin,cade);
		bool vec[12];
		bool sw=true;
		aux=0;
		memset(vec,false,sizeof vec);

		for(int i=0;i<cade.size()&&sw;i++){
			//if(cade[i]-'0'>k){sw=false;break;}
			
			if(!vec[cade[i]-'0']&&cade[i]-'0'<=k)aux++;
			vec[cade[i]-'0']=true;
		}
		if(sw && aux-1==k)conta++;
	}
	cout<<conta<<endl;

	return 0;
}