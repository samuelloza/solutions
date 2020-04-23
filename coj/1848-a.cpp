#include <iostream>
#define maxi 10000
#define mod
using namespace std;

int main()
{
long long int vec[maxi+16];
		vec[0] = vec[1] = vec[3]=vec[2] = 0;
		vec[4] = vec[5] = 1;
		for (int i = 6; i < maxi+10; i++) {
			vec[i] = (vec[i - 2]+vec[i - 1])%10000;
		}
		int ca,p;
		cin>>ca;
		while (ca--) {
			cin>>p;
			p+=4;
			cout<<vec[p - 3]<<" "<< vec[p - 2]<< " " << vec[p - 1]<<endl;
		}
    return 0;
}
