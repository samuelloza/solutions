#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
int s(int n){
	int sum = 0;
	while(n>0){
		sum+=(n%10);
		n=n/10;	
	}
	return sum;
}
int fun(int d) {
	int dat;
	while(d > 10){
		while( true ){
			dat=s(d);
			d=dat;
			if(!(dat >= 10))break;
		}
		if(d==1)return 1;
	}
	return d;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int d = pow(10,n-1);
	for (int i = d; i < d*10; i++	) {
		if(fun(i)==m){cout<<i<<endl; return 0;}
	}
	cout<<"No Solution"<<endl;
	return 0;
}