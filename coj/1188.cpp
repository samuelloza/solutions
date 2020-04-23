#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int vec[101],vec1[101];
    int x,y;
    cin>>x>>y;
    int i=0;
    while(x!=0)
    {
        vec[i]=x%10;
        x=x/10;
        i++;
    }
    int j=0;
    while(y!=0)
    {
        vec1[j]=y%10;
        y=y/10;
        j++;
    }
    float tot=0;
    if(i<j)
    {
        for(int h=i-1; h>=0; h--)
        {
            for(int k=j-1; k>=0; k--)
            {
                tot=(vec[h]*vec1[k])+tot;

            }

        }
    }
    else
    {
        for(int h=j-1; h>=0; h--)
        {
            for(int k=i-1; k>=0; k--)
            {
                tot=(vec[k]*vec1[h])+tot;

            }

        }
    }
    cout<<(int)tot<<endl;
    return 0;
}
