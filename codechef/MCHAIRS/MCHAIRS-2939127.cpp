#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007
using namespace std;
long long int ex_fast(long long a, long long b, long long c){
    if(b==1)
        return a%c;
    long long int tem = ex_fast(a, b>>1, c);
    if(b&1)
        return (tem*tem*a)%c;
    else
        return (tem*tem)%c;
}
int main(){
    int T;
    long long n;
    scanf("%d", &T);
    while(T--){
        scanf("%lld", &n);
        /*long long int ans=2;
        for(int i=0;i<n-1;i++){
        	ans=(ans*2)%MOD;
        }*/
        printf("%lld\n",ex_fast(2,n,MOD)-1 );
    }
    return 0;
}