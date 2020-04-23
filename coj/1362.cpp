#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long int mcd(long long int m,long long int n) {
    int resto;
    while (n> 0) {
        resto=m%n;
        m=n;
        n=resto;
    }
    return m;
}

int main() {
    long long int A,B,C;
    while(cin>>A>>B>>C) {
        if((A!=0||B!=0||C!=0)) {
            if(A==0&&B==0) {
                cout<<"NO"<<endl;
            } else {
                if(abs(C)%mcd(max(abs(A),abs(B)),min(abs(A),abs(B)))==0) {
                    cout<<"YES"<<endl;
                } else {
                    cout<<"NO"<<endl;
                }
            }

        } else {
            break;
        }

    }
    return 0;
}


