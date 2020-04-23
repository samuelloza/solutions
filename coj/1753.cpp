#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    string cad;
    getline(cin,cad);
    while(n--)
    {
        char x;
        char cade[500]= {0};
        int j=0;
        while((x=getchar())!='\n')
        {
            if(x=='A'||x=='B'||x=='C'||x=='a'||x=='b'||x=='c')
            {
                cade[j]=50;
                j++;
            }
            if(x=='D'||x=='E'||x=='F'||x=='d'||x=='e'||x=='f')
            {
                cade[j]=51;
                j++;
            }
            if(x=='G'||x=='H'||x=='I'||x=='g'||x=='h'||x=='i')
            {
                cade[j]=52;
                j++;
            }
            if(x=='J'||x=='K'||x=='L'||x=='j'||x=='k'||x=='l')
            {
                cade[j]=53;
                j++;
            }
            if(x=='M'||x=='N'||x=='O'||x=='m'||x=='n'||x=='o')
            {
                cade[j]=54;
                j++;
            }
            if(x=='P'||x=='Q'||x=='R'||x=='S'||x=='p'||x=='q'||x=='r'||x=='s')
            {
                cade[j]=55;
                j++;
            }
            if(x=='T'||x=='U'||x=='V'||x=='t'||x=='u'||x=='v')
            {
                cade[j]=56;
                j++;
            }
            if(x=='W'||x=='X'||x=='Y'||x=='Z'||x=='w'||x=='x'||x=='y'||x=='z')
            {
                cade[j]=57;
                j++;
            }
        }
        int h=j;
        bool sw=true;
        j--;
        for(int i=0; i<(h/2)+1; i++,j--)
        {
            if(cade[i]!=cade[j])
            {
                sw=false;
            }
        }
        if(sw)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
