#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
bool uni_minus(string x)
{
    bool sw=true;
    for(int i=0; i<x.length(); i++)
    {
        if(isalpha(x.at(i)))
        {
            if(x.at(i)>=97&&x.at(i)<=122)
            {
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string cad;
    while(getline(cin,cad))
    {
        if(cad.length()>=1)
        {
            if(isupper(cad.substr(0,1).at(0)))
            {
                if(uni_minus(cad.substr(1,cad.length())))
                {
                    cout<<cad.substr(0,cad.length());
                }
                else
                {
                    for(int i=0; i<cad.length(); i++)
                    {
                        if(isalpha(cad.at(i)))
                        {
                            if(isupper(cad.at((i))))
                            {
                                putchar(tolower(cad.at(i)));
                            }
                            else
                            {
                                putchar(toupper(cad.at(i)));
                            }
                        }

                        else
                        {
                            cout<<cad.at(i);
                        }
                    }
                }
            }
            else//minus
            {
                if(uni_minus(cad.substr(0,cad.length())))
                {
                    cout<<cad.substr(0,cad.length());
                }
                else
                    for(int i=0; i<cad.length(); i++)
                    {

                        if(isalpha(cad.at(i)))
                        {
                            if(isupper(cad.at((i))))
                            {
                                putchar(tolower(cad.at(i)));
                            }
                            else
                            {
                                putchar(toupper(cad.at(i)));
                            }
                        }
                        else
                        {
                            cout<<cad.at(i);
                        }
                    }
            }
        }
        else
        {
            cout<<cad;
        }
        cout<<endl;
    }

    return 0;
}
