#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    unsigned long long int N,K;
    int k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%llu %llu",&N,&K);
        if(K==0) printf("0 %lld\n",N);
        else printf("%lld %lld\n",(N/K),(N%K));
    }
    return 0;
}