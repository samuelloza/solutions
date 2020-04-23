#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
        int test,n;
        long long int s;
        const long double c1 = 0.798179868358; //lg(2*pi)
        const long double c2 = 0.434294481903; //lg(e)
        long double c3;
        cin >> test;
        while(--test+1)
        {
                cin >> n;
                c3 = log10((double)n);
                s = 1;
                if(n > 3)
                {
                        s = (c3 + c1)/2 + n * (c3 - c2) + 1;
                        cout << s << endl;
                }
                else
                        cout << 1 << endl; 
        }
        return 0;
}