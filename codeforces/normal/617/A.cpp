#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n >=1 && n<= 5){
		cout<<1<<endl;
	}else{
		int ans = n/5;
		n%=5;

		ans +=n/4;
		n%=4;

		ans +=n/3;
		n%=3;

		ans +=n/2;
		n%=2;

		ans +=n/1;
		cout<<ans<<endl;

	}	


	
	return 0;
}