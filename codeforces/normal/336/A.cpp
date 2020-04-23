#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	long long int a,b,x1,y1,y2,x2;
	cin>>a>>b;
	if(a ==0 && b==0){
		x1=y1=x2=y2=0;
	}else if(a>0 && b>0){
		x1=0;	y1=a+b;
		x2=a+b;	y2=0;
	}else if(a < 0 && b > 0 ){
		x1=0;			  y1=abs(a)+b;
		x2=(abs(a)+b)*-1; y2=0;
	}else if(a > 0 && b < 0){
		x1=0;			y1=(a+abs(b))*-1;
		x2=a+abs(b); 	y2=0;
	}else if(a<0 && b<0){
			x1=(abs(a)+abs(b))*-1;	y1=0;
			x2=0;	y2=(abs(a)+abs(b))*-1;
	}
	if(!(x1 < x2)){
		swap(x1,x2);
		swap(y1,y2);
	}
	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	return 0;
}