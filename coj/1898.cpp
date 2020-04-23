#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n;
    double t1,t2,k;
    scanf("%d",&n);
    while(n--){

    cin>>t1>>t2>>k;
    printf("%.4f\n",(k/(t1+t2)));
    }
    return 0;
}