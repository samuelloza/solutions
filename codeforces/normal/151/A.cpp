#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int a=(k*l)/nl;
	int b=c*d;
	int cc=p/np;
	cout<<(min(min(a,b),cc))/n<<endl;
	return 0;
}