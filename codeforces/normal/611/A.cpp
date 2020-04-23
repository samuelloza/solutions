#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    string dia[8] = {"","LUN","MAR","MIE","JUE","VIE","SAB","DOM"};
    int n;
    string a ,b;
    cin>>n>>a>>b;
    vector<pair<int,int> >vec;
    vec.push_back(make_pair(31,7)); //enero,31 cdomingo
    vec.push_back(make_pair(29,1));
    vec.push_back(make_pair(31,4));
    vec.push_back(make_pair(30,6));
    vec.push_back(make_pair(31,2));
    vec.push_back(make_pair(30,4));
    vec.push_back(make_pair(31,7));
    vec.push_back(make_pair(31,3));
    vec.push_back(make_pair(30,5));
    vec.push_back(make_pair(31,1));
    vec.push_back(make_pair(30,3));
    vec.push_back(make_pair(31,6));


    int ans =0 ;
    if(b.compare("week") == 0)
    {
        int c = 1;
        for(int i=0; i<vec.size(); i++)
        {

            if (i == 0 )
            {
                c = 5;
            }

            //cout << dia[c]<<"!!!"<<endl;
            for(int j=0; j<vec[i].first; j++)
            {
               // cout<<dia[c]<<" "<<j+1<<" "<<endl;;
                if(c == n)
                {
                    ans++;
                }
                c++;

                if(c == 8) c =1;
            }
           // cout<<" -*********** "<<endl;
        }

    }else{
         for(int i=0; i<vec.size(); i++){
                if(n<=vec[i].first && n >=1)ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}