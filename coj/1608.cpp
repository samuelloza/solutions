#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
struct cmp{
    bool operator()(const pair<string, int>& y, const pair<string, int>& x){
        if(y.second==x.second)
            return  y.first<(x.first);
        else return y.second<x.second;
    }
};

int main(){
    int k,a,b,b1,i=0,lim;
    bool sw=false;
        while(scanf("%d %d",&a,&b)&&a!=0||b!=0){
        vector<pair<string,int> > v;
        int vec2[b];
        char c[a];
        b1=b;
        int cont=0;
        while(b--)
        {
            scanf("%s",c);
            i++;
            for(int ii=0; ii<a-1; ii++)
            {
                for(int j=ii+1; j<a; j++)
                {
                    if(c[ii]>c[j])
                    {
                        cont++;
                    }
                }
            }
            v.push_back(make_pair(c,cont));
            sort(v.begin(),v.end(),cmp());
            cont=0;
        }
        if(sw)cout<<endl;
        sw=true;

        for (int i = 0; i < b1; i++)
        {
            cout<<v[i].first<<endl;
        }
    }
    return 0;
}
