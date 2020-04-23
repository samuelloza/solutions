#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
bool fun(string a,string b)
{
    int i=0;
    bool sw=false;
    while(i<3)
    {
        if(a[i]=='#'&&a[i+1]=='.')
        {
            if(b[i]=='#'&&b[i+1]=='.')
            {
                sw=true;
                break;
            }
            else if(b[i]=='.'&&b[i+1]=='#')
            {
                sw=true;
                break;
            }
            else if(b[i]=='#'&&b[i+1]=='#')
            {
                sw=true;
                break;
            }else if(b[i]=='.'&&b[i+1]=='.')
            {
                sw=true;
                break;
            }
        }
        else
        {
            if(a[i]=='.'&&a[i+1]=='#')
            {

                if(b[i]=='#'&&b[i+1]=='.')
                {
                    sw=true;
                    break;
                }
                else if(b[i]=='.'&&b[i+1]=='#')
                {
                    sw=true;
                    break;
                }
                else if(b[i]=='#'&&b[i+1]=='#')
                {
                    sw=true;
                    break;
                }else if(b[i]=='.'&&b[i+1]=='.')
            {
                sw=true;
                break;
            }
            }
            else if(a[i]=='#'&&a[i+1]=='#')
            {
                if(b[i]=='#'&&b[i+1]=='.')
                {
                    sw=true;
                    break;
                }
                else if(b[i]=='.'&&b[i+1]=='#')
                {
                    sw=true;
                    break;
                }
                else if(b[i]=='#'&&b[i+1]=='#')
                {
                    sw=true;
                    break;
                }
            }
            else if(a[i]=='.'&&a[i+1]=='.')
            {
                if(b[i]=='#'&&b[i+1]=='.')
                {
                    sw=true;
                    break;
                }
                else if(b[i]=='.'&&b[i+1]=='#')
                {
                    sw=true;
                    break;
                }
                else if(b[i]=='.'&&b[i+1]=='.')
                {
                    sw=true;
                    break;
                }

            }
        }
        i++;
    }
    return sw;
}
int main()
{
    string a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(fun(a,b) or fun(b,c) or fun(c,d))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }

    return 0;
}