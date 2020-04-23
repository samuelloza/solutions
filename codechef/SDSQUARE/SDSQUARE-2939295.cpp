#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#define MOD 1000000007
using namespace std;
vector<long long int> vec;
void gen(){
	long long int aux;
	bool flag=true;
	for(long long int i=1,j=1;i<=100000;i++){
		aux=i*i;
		while(aux!=0 and flag){
			if(!(aux==0 or aux==1 or aux==4 or aux==9)){
				flag=false;break;
			}else aux/=10;
		}
		if(flag){vec.push_back(i*i);}
		flag=true;
	}
}
int main(){
	//freopen("SDSQUARE.in","r",stdin);
	gen();
	int t;
	scanf("%d",&t);
	long long int a,b; 
	vector<long long int>::iterator x,y;
	while(t--){
		scanf("%lld %lld",&a,&b);
		x=lower_bound(vec.begin(),vec.end(),a);
		y=upper_bound(vec.begin(),vec.end(),b);
		cout<<((y-vec.begin())-(x-vec.begin()))<<endl;
	}
	return 0;
}