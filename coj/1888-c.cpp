#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int sum=0; char n,m; n=getchar();
    while((n)!=EOF) {bool sw=false,sw1=false;
        while(isdigit(n)==false) {n=getchar();}sum=0;
        while(n!='\n'&&n!=EOF) { while(isdigit(n)==false&&n!='\n') {n=getchar();}
            if(isdigit(n)) {sum+=n-'0';if(n-'0'==6) {sw=true;}else{} m=n;}
            if(n=='\n')break;

            n=getchar();}
        bool s1=false,s2=false,s3=false;
        if(sw&&(((m-'0')%2==0)&&sum%3==0)){
            if(sum%6==0) {cout<<"EVIL"<<endl;} else {cout<<"GOOD"<<endl;}
        } else {cout<<"GOOD"<<endl;}
        n=getchar(); } return 0;
}