#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
using namespace std;
bool flag=false;
void KMP(string S, string K)
{
    vector<int> T(K.size() + 1, -1);
    for(int i = 1; i <= K.size(); i++)
    {
        int pos = T[i - 1];
        while(pos != -1 && K[pos] != K[i - 1]) pos = T[pos];
        T[i] = pos + 1;
    }
    vector<int> matches;
    int sp = 0;
    int kp = 0;
    while(sp < S.size())
    {
        while(kp != -1 && (kp == K.size() || K[kp] != S[sp])) kp = T[kp];
        kp++;
        sp++;
        if(kp == K.size()){ 
            flag=true; printf("%d\n",sp - K.size() ); 
            //matches.push_back(sp - K.size());
        }
    }
    /* En el vector matches se guardan los Ã­ndices a cada una de las ocurrencias, por tanto el tamanio de dicho vector nos dirÃ¡ cuÃ¡ntas ocurrencias se han encontrado. */
    //return matches.size();
}
int main(){      
    //freopen("nhay.in","r",stdin);
   int n,i;
   string K,S;
   while(scanf("%d",&n)!=EOF){
      getchar();
      getline(cin,K);
      getline(cin,S);
      KMP(S,K);
      if(!flag)printf("\n");
      flag=false;
  }
  return 0;
}
