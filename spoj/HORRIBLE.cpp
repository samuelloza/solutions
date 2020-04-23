#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

struct Node{
 long long sum;  //suma de hijos
 long long offset;//suma que no propaga de total nodo
}Tree[500000];

void Update(long long node,long long lo,long long hi,long long i,long long j,long long val){
 if(lo>j || hi<i)
  return;

if(lo>=i && hi<=j){
  Tree[node].sum+=(hi-lo+1)*val;
  Tree[node].offset+=val;
}else{
  long long mid=(lo+hi)>>1;
  Update(2*node,lo,mid,i,j,val);
  Update(2*node+1,mid+1,hi,i,j,val);
  Tree[node].sum=Tree[2*node].sum+Tree[2*node+1].sum+(hi-lo+1)*Tree[node].offset;
}
}

long long Query(long long node,long long lo,long long hi,long long i,long long j,long long offst){
 if(lo>j || hi<i)
  return 0;

if(lo>=i && hi<=j){
  return offst*(hi-lo+1)+Tree[node].sum;
}else{
  long long mid=(lo+hi)>>1;
  offst+=Tree[node].offset;
  long long q1=Query(2*node,lo,mid,i,j,offst);
  long long q2=Query(2*node+1,mid+1,hi,i,j,offst);
  return q1+q2;
}
}
void Clear(long long N){
  for(long long i=0;i<4*N;i++){
    Tree[i].offset=Tree[i].sum=0;
  }
}

int main(){
 //freopen("in.in","r",stdin);
 long long N,C,m,n,ch,val,ofst=0,t;
 int i,j;
 cin>>t;
 for(i=0;i<t;i++){
  cin>>N>>C;
  Clear(N);
  for(j=0;j<C;j++){
    cin>>ch;
    if(ch==1){
     cin>>m>>n;
     cout<<Query(1,1,N,m,n,ofst)<<endl;
   }else{
     cin>>m>>n>>val;
     Update(1,1,N,m,n,val);
   }
 }
}
return 0;
}
