#include <iostream>

using namespace std;
int sum(int n)
{
    int c=1;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
            c+=i;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int y=sum(x);
        if(y==x)
            {cout<<"Perfect"<<endl;}
        else if(y>x)
            {cout<<"Abundant"<<endl;}
        else
            {cout<<"Deficient"<<endl;}
    }

    return 0;
}
