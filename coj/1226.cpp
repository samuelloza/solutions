#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long long num, i;
    //freopen("input.txt", "r", stdin);
    while(cin>>num){
        if(num < 0)    break;
        for(i = 2; i <= (int)sqrt(num); i++)
            while(num % i == 0){
                cout<<"    ";
                cout<<i<<endl;
                num /= i;
            }
        if(num > 1) cout<<"    "<<num<<endl;
        cout<<endl;
    }
}
