#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n=0,d=0;
    bool sw=false;
    bool iguales=false;
    while(cin>>n>>d)
    {
        string vec[n+1],aux[n+1];
        string vec2[n+1],aux2[n+1];
        int vec3[n+1];

        int nn=n,i=0;
        while(nn--)
        {
            cin>>vec[i]>>vec2[i]>>vec3[i];
            i++;
        }
        nn=n;
        i=0;
        int conta=0;
        while(nn--)
        {
            int l=0,k=0;
            for(int l=0; l<n; l++)
            {
                sw=false;
                for(int k=l+1; k<n; k++)
                {
                    if(vec[l].compare(vec2[k])==0&&vec2[l].compare(vec[k])==0)
                    {
                        int res=vec3[k]-vec3[l];
                        if(res>0&&res<=d)
                        {
                            for(int j=0; j<k; j++)
                            {
                                if(vec3[l]<=vec3[k])
                                {
                                    if(aux[j].compare(vec[l])==0&&aux2[j].compare(vec2[l])==0)
                                    {
                                        sw=true;
                                        break;
                                    }
                                }
                                else
                                {
                                    if(aux[j].compare(vec[k])==0&&aux2[j].compare(vec2[k])==0)
                                    {
                                        sw=true;
                                        break;
                                    }
                                }

                            }
                            if(!sw)
                            {
                                aux[conta]=vec[l];
                                aux2[conta]=vec2[l];
                                conta++;
                            }
                        }
                    }
                }
            }
        }
        cout<<conta<<endl;
        for(i=0; i<conta; i++)
            cout<<aux2[i]<<" "<<aux[i]<<endl;
    }
    return 0;
}