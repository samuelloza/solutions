#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double ca;
    bool sw=false;
    while(cin>>ca&&ca!=0) {
        int n=1;
        printf("Starting height: %.05f meter(s)\n",ca);
        double lim=0.001;
        while(double(ca)>double(lim)) {
            ca=double(ca/2);
            printf("Bounce #%d: %.010f meters\n",n,ca);
            n++;
        }
        cout<<endl;
    }
    return 0;
}
