#include <iostream>
using namespace std;
void nrespacios(int n)
{
    for(int i=0; i<n; i++)
        cout<<" ";
}
void impraste(int n)
{
    for(int i=0; i<n; i++)
        cout<<"*";
}
void triangulo(int h)
{
    int y=1;
    for(int i=0; i<h; i++)
    {
        nrespacios((h-i)-1);
        impraste(y);
        y=y+2;
        cout<<endl;
    }
}
void paralel(int w,int h)
{
    for(int i=0; i<h; i++)
    {
        nrespacios((h-i)-1);
        impraste(w);
        cout<<endl;
    }
}
void rectangle(int w,int h)
{
    for(int i=0; i<h; i++)
    {
        impraste(w);
        cout<<endl;
    }
}
int main()
{
    int n,w,h;
    cin>>n;
    while(n!=-1)
    {
        switch (n)
        {
        case 1:
            cin>>w;
            triangulo(w);
            break;
        case 2:
            cin>>w>>h;
            paralel(w,h);
            break;
        case 3:
            cin>>w>>h;
            rectangle(w,h);
            break;
        default :
            break;
        }
        cin>>n;
        if(n!=-1)
        cout<<endl;
    }
    return 0;
}
