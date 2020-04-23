#include <iostream>
#include <vector>
#include <map>
#include <stdio.h>
using namespace std;
int main() {
    int n,k,l;scanf("%d",&n);
    while(n--){scanf("%d",&k);
      map<int,int> ma;bool sw=false;
        for(int i=0; i<k; i++) {
            cin>>l;
            if(ma[l]==0) {
                ma[l]=1;
            } else {
                ma[l]++;cout<<l<<endl;sw=true;
            }
        }
        if(!sw)cout<<"Not found!"<<endl;
    }
    return 0;
}