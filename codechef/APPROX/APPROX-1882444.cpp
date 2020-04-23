#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
char vec[]={"415926530119026040722614947737296840070086399613316"};
int n;
int pasolim(int j){
	if(j==0) return j;
	if(jQ==0)return 0;
	return j;
}
int main(){

/*
	int a,b,aux,r,j=0;
	a=103993;
	b=33102;
	for(int i=0;i<100;i++){
		aux=a/b;
		r=a%b;
		cout<<aux;
		for(;r*10>b;r*=10){
		   a=r;
		}
		
		if(a<=b)
		cout<<a<<" resp "<<b<<endl;
		
	}*/
	int k,n;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		if(n==0)cout<<3;
		else{
			cout<<"3.1";
			for(int i=1,j=0;i<n;i++){
				j=pasolim(j);
				putchar(vec[j]);
				j++;
			}
		}	
		cout<<endl;
	}
	
	return 0;
}