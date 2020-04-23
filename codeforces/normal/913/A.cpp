#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int n,m;
	cin>>n>>m;
	if(n == m ) {
		cout<<n<<endl;
		return 0;
	}
	if(pow(2,n) > m ){
		cout<<m<<endl;
	}else{
		long long int p = pow(2,n);
		cout<<m%p<<endl;
	}
	return 0;
}