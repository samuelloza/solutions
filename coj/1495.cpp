#include <iostream>

using namespace std;

int main()
{
    int lim;
    cin>>lim;
    int vec[1001];
    for(int i=0;i<lim;i++)
        {
            cin>>vec[i];
        }
        ///oprdenamiento
        for(int i=0;i<lim;i++)
        {
        for(int j=i+1;j<lim;j++)
        {
            if(vec[i]>vec[j])
                {
                    int aux;
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
        }
        }
        for(int i=0;i<lim;i++)
        {
            cout<<vec[i]<<endl;
        }
    return 0;
}