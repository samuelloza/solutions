#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
while(a>0 && c>0){
c = c-__gcd(a,c);
if(c==0){cout<<0<<endl;break;}
c =c- __gcd(b,c);
if(c==0){cout<<1<<endl;break;}
}
return 0;
}