#include <iostream>

using namespace std;

int main()
{
    int lim;
    cin>>lim;
    int i=0;
    int vec[7];
    while(i<lim)
    {
        for(int ii=0; ii<6; ii++)
        {
            cin>>vec[ii];
        }
        cout<<1-vec[0]<<" "<<1-vec[1]<<" "<<2-vec[2]<<" "<<2-vec[3]<<" "<<2-vec[4]<<" "<<8-vec[5]<<endl;
        i++;
    }
    return 0;
}
