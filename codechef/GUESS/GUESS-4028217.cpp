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
using namespace std;

int main(){
	int limi;
	scanf("%d",&limi);
	long long int a,b,ans;
	long long int mid,ne;
	while(limi--){
		scanf("%lld %lld",&a,&b);
		if(a%2==0 or b%2==0){
			cout<<"1/2"<<endl;
		}else{
			ans=(a*b);
			mid=ans/2;
			ne=__gcd(mid,ans);
			if(ne!=1){
				a=mid/ne;
				b=ans/ne;
			}else{
				a=mid;
				b=ans;
			}
			printf("%lld/%lld\n",a,b);
		}
	}
	return 0;

}