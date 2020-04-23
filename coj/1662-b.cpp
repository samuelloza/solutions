#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){int n=0; cin>>n; int aa=1;string c;getline(cin,c); bool sw=true;
while(n--){  char x;x=getchar(); while((x)!='\n'){char pala=x;char cad[10]= {0};x=getchar();int h=0;
while(x>='0'&&x<='9'){cad[h]=x;h++;x=getchar();}
if(sw)cout<<"Case "<<aa<<": ";

sw=false;
for(int i=0; i<atoi(cad); i++){cout<<pala;}}sw=true;aa++;cout<<endl;}return 0;}
