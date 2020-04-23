#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long int dat;
		vector<long long int> vec;
		for(int i=0;i<n;i++){
			scanf("%lld",&dat);
			vec.push_back(dat);
		}
		long long int bus;
		scanf("%lld",&bus);
		bus=vec[bus-1];
		sort(vec.begin(),vec.end());
		for(int i=0;i<vec.size();i++){
			if(bus==vec[i]){dat=i;break;}
		}
		printf("%d\n",dat+1);
	}
	return 0;
}