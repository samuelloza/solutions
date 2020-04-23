#include <iostream>

using namespace std;

int main()
{
    int lim;
    cin>>lim;
    for(int i=0; i<lim; i++)
    {
        int ii;
        cin>>ii;
        int vec[200];
        for(int j=0; j<ii; j++)
        {
            cin>>vec[j];
        }
        int conta=0;
        for(int h=0;h<ii;h++)
            {
                for(int hh=h+1;hh<ii;hh++)
                    {
                        if(vec[h]>vec[hh]){
                        conta++;
                        }
                    }
            }
        cout<<"Optimal train swapping takes "<<conta<< " swaps."<<endl;
    }
    return 0;
}