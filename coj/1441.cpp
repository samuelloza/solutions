#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int vec[3];
    while(cin>>vec[0])
    {
        cin>>vec[1];
        cin>>vec[2];
 
        if(vec[0]!=0 ||vec[1]!=0 ||vec[2]!=0)
        {
 
        for(int i=0; i<3; i++)
        {
            for(int j=i+1; j<3; j++)
            {
                if(vec[i]>vec[j])
                {
                    int aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
        if(sqrt((double)pow((double)vec[0],2)+(double)pow((double)vec[1],2))==(double)vec[2])
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
        }
        else
        {
           break;
        }
    }
    return 0;
}
 