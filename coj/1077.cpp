#include <iostream> 
#include <map> 
using namespace std; 
map<int,int> clMap; 
int calculateCL( int i ){ 
 int cl; 
 if( i <= 1 ) 
  return 1; 
 if( clMap[i] != 0) 
  return clMap[i]; 
 if( (i & 0x01) != 0) { 
  cl = calculateCL( i * 3 + 1) + 1; 
 }else{ 
  cl = calculateCL( i / 2 ) + 1; 
 } 
 clMap[i] = cl; 
 return cl; 
} 

int calculateMax(int i, int j){ 
 int max = 0; 
 int cl; 
 for( int k = i; k <= j; k++){ 
  cl = calculateCL( k ); 
  if( cl > max ){ 
   max = cl; 
  } 
 } 
 return max; 
} 

int main(){ 
 int i,j,max; 
 while( cin >> i >> j  ){ 
  max = i < j? calculateMax(i,j) : calculateMax(j,i); 
  cout << i << " " << j << " " << max <<endl; 
 } 
} 
