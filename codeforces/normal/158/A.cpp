#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n)
    {
        cin>>k;
        int vec[n+1];
        int i,ii=0,c=0;
        for(i=0; i<n; i++)
        {
            cin>>vec[i];
        }
        for(i=0; i<n; i++)
        {

            if(vec[i]!=0&&vec[i]>=vec[k-1])
            {
                c++;
            }
        }

        cout<<c<<endl;
    }
    return 0;
}