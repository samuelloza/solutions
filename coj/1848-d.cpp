#include <iostream>
#include <cstdio>
using namespace std;
int vec[10000+10];
int main(){
	vec[0]=vec[1]=0;
	vec[2]=1;
	for(int i=3;i<10000+8;i++) vec[i]=(vec[i-1]+vec[i-2])%10000;
	int casos,n;
	scanf("%d",&casos);
	while(casos--) {
		scanf("%d",&n);
		cout<<vec[n - 1]<<" "<< vec[n]<< " " << vec[n+1]<<endl;
	}
	return 0;
}