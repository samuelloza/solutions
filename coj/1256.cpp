#include <iostream>
#include <string.h>
using namespace std;
int formula(int a,int b,int c,int s);
int binario(int nu);
int binario2(int nu);
static int f[17]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int main()
{
    int a;
    while(cin>>a&&a!=0)
    {
        int b,c,s,ori;
        cin>>b>>c>>s;
        binario(s);
        ori=s;
        s=formula(a,b,c,s);
        int gg=0,hh=0;
        while(s!=ori&&gg<63999)
        {
            binario2(s);
            s=formula(a,b,c,s);
            gg++;
        }
        for(int i=16; i>0; i--)
        {
            if(f[i]==2)
            {
                cout<<"?";
            }
            else
            {
                cout<<f[i];
            }
        }
        f= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        cout<<endl;
    }
    return 0;
}
int formula(int a,int b,int c,int s)
{
    return (a*s+ b)% c;
}
int binario(int numero)
{
    int nu;
    int ii=0;
    while(numero>=1)
    {
        nu=numero%2;
        numero=numero/2;
        f[++ii]=nu;
    }
}
int binario2(int numero)
{
    int nu;
    int ii=0;
    while(numero>=1)
    {
        nu=numero%2;
        numero=numero/2;
        if(f[++ii]!=nu)
        {
            f[ii]=2;
        }
    }
}
