#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    char vec[10];
    vec[0]='O';
    vec[1]='I';
    vec[2]='Z';
    vec[3]='E';
    vec[4]='A';
    vec[5]='S';
    vec[6]='G';
    vec[7]='T';
    vec[8]='B';
    vec[9]='P';
    string dd;
    getline(cin,dd);
    bool sw=false;
    while(n--)
    {
        char x;
        while((x=getchar())!='\n'&&x!=EOF)
        {

            while(x!='\n'&&x!=EOF)
            {
                if(x>=48&&x<=57)
                {
                    cout<<vec[x-'0'];
                }
                else
                {
                    cout<<x;
                }
                x=getchar();
            }
            cout<<endl;
        }
        if(n!=0)
        cout<<endl;
    }
    return 0;
}

