#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <string.h>
using namespace std;
#define limpio 1
#define sucio 0 
int main(){
	long long int n,m,dat;
	scanf("%lld %lld",&n,&m);
	vector<long long int> vec;
	if(m==0){printf("YES\n");return 0;}
	while(m--){
		scanf("%lld",&dat);
		vec.push_back(dat);
	}

	sort(vec.begin(),vec.end());
	if(vec[0]==1 or vec[vec.size()-1]==n){printf("NO\n");return 0;}

	long long int num;
	for(long long int i=0;i<vec.size();i++){

		num=vec[i];
		if(vec[i+1]==num+1&&vec[i+2]==num+2){
			printf("NO\n");return 0;
		}
	}
	printf("YES\n");
	return 0;
}