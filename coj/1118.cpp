#include <iostream>
using namespace std;
int main()
{
    int casos,iii=0;
    cin>>casos;
    while(iii<casos)
    {
        int con;
        cin>>con;
        int i=0,gg=0;
        bool vec[109]= {1};
        for(i=1; i<=con; i++)
        {
            for(int i2=i; i2<=con; i2+=i)
            {
                if(vec[i2]==0)
                {
                    vec[i2]=1;
                    gg++;
                }
                else
                {
                    vec[i2]=0;
                    gg--;
                }
            }
        }
        cout<<gg<<endl;
        iii++;
    }
    return 0;
}
