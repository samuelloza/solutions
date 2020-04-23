    #include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int n;
 double vec[101];
 vec[1] = 1;
 int next = 4;
 for(int i = 2; i <= 100; i++){
   vec[i] = vec[i-1]+next;
   next += 4;
 }

 while(cin >> n){
   cout<<vec[n]<<endl;
 }
 
 return 0;
}