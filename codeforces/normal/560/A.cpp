#include <algorithm>
#include <iostream>
#include <iterator>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>
using namespace std;
int main(){
int n;
cin>>n;
 int sum = 0;
  int tmp = 0;
  vector<int> vec;
  for(int i=0;i<n;i++){
      cin>>tmp;
      vec.push_back(tmp);
      sum += tmp;
  }
  int mini = 1000000;
  bool sw = true;
  for(int j=0;j<vec.size();j++){
  sw = true;
  int ans = 0;
  for(int i=0;i<vec.size()-j;i++){
          if(sum%vec[i] != 0){
                sw= false;
              break;
          }else{
              ans+=(sum/vec[i]);
          }
  }
  if(!sw)break;
  else{
   mini = min(mini,ans);
   ans = 0;
  }
  }
  if(!sw){
      cout<<"-1"<<endl;
  }else{
    cout<<mini<<endl;
  }
  
  


return 0 ;
}