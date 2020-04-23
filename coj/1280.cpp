#include <iostream>

using namespace std;

int main()
{
    int lim;
    while(cin>>lim&&lim!=0)
    {
        int n,su=1,re=0;
        for(int j=0; j<lim; j++)
        {
            su=re+su;

            re=re+2;
        }
        cout<<lim<<" => "<<su<<endl;
    }
    return 0;
}
