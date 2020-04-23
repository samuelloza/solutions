#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
 
using namespace std;
 
int main()
{
    //  ofstream fout ("test.out");
//  ifstream cin ("test.in");
    int n;
    cin>>n;
    while(n!=0)
    {
        string vec[n+1];
        string ve2[11];
        string ve3[11];
        string ve4[11];
        string ve5[11];
 
        ve2[0]=".*\n**\n..\n";
        ve2[1]="*.\n..\n..\n";
        ve2[2]="*.\n*.\n..\n";
        ve2[3]="**\n..\n..\n";
        ve2[4]="**\n.*\n..\n";
        ve2[5]="*.\n.*\n..\n";
        ve2[6]="**\n*.\n..\n";
        ve2[7]="**\n**\n..\n";
        ve2[8]="*.\n**\n..\n";
        ve2[9]=".*\n*.\n..\n";
 
 
        ve3[0]=".*";
        ve4[0]="**";
        ve5[0]="..";
 
        ve3[1]="*.";
        ve4[1]="..";
        ve5[1]="..";
 
        ve3[2]="*.";
        ve4[2]="*.";
        ve5[2]="..";
 
        ve3[3]="**";
        ve4[3]="..";
        ve5[3]="..";
 
        ve3[4]="**";
        ve4[4]=".*";
        ve5[4]="..";
 
        ve3[5]="*.";
        ve4[5]=".*";
        ve5[5]="..";
 
        ve3[6]="**";
        ve4[6]="*.";
        ve5[6]="..";
 
        ve3[7]="**";
        ve4[7]="**";
        ve5[7]="..";
 
        ve3[8]="*.";
        ve4[8]="**";
        ve5[8]="..";
 
        ve3[9]=".*";
        ve4[9]="*.";
        ve5[9]="..";
        string cad;
        cin>>cad;
        for(int i=0; i<n; i++)
        {
            vec[i]="";
        }
        if(cad.compare("B")==0)
        {
            string a;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cin>>a;
                    a.append("\n");
                    vec[j].append(a);
                }
            }
 
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<11; j++)
                {
                    if(vec[i].compare(ve2[j])==0)
                        cout<<j;
                }
            }
            cout<<endl;
        }
        else
        {
            string cade;
            getline(cin,cade);
            int posi[n+1];
            int j=0;
            char nu;
            nu=getchar();
            while(nu!='\n')
            {
                posi[j]=nu-'0';
                j++;
                nu=getchar();
            }
            for(int i=0; i<3; i++)
            {
                for(int j2=0; j2<j; j2++)
                {
                    if(i==0)
                        cout<<ve3[posi[j2]];
                    if(i==1)
                        cout<<ve4[posi[j2]];
                    if(i==2)
                        cout<<ve5[posi[j2]];
                    if(j2!=n-1)
                        cout<<" ";
                }
                cout<<endl;
            }
        }
        cin>>n;
    }
    return 0;
}