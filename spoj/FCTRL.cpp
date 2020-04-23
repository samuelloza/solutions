#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n,count=0;
        scanf("%lld",&n);
        for(long long j=5;n/j>0;j*=5)
            count+=n/j;
        cout<<count<<"\n";
    }
    return 0;
