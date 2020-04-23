#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int dp[500100]= {0};
int dx[100000];


int find(int l, int r, int v)
{
  int mid;
  while( l <= r)
  {
     mid = (l + r ) / 2;
     if (dx[mid] == v)
       return 1;
     else if ( dx[mid] > v)
        r= mid -1;
     else
        l=  mid + 1;
   }
   return 0;
 }
        
int main( )
{
    int i, j, a, b, k = 0, c, d;
    dx[0] = 2;
    k = 1;
    for ( i = 3; i <= 1000; i += 2 ) {
      if (dp[i / 2] == 1)
          continue;
      for (j = i * i; j <= 1000000; j += i + i)
          dp[j / 2] = 1;
    }
      for (i = 1; i < ( 500000+1) ; i++)
          if (dp[i] != 1 )
          dx[k++] = i * 2 + 1;
      int flag = 0;
      while (scanf("%d",&a), a ) {
          for (i = 0; i < k; i++) {
              if ( find (0, k-1, a-dx[i]) ) {
                      printf("%d = %d + %d\n",a, dx[i], a-dx[i]);
                      break;
              }
              else if ( dx[i] > a) {
                    printf("Goldbach's conjecture is wrong.\n");
                    break;
              }
              else if ( i == k-1) {
                      printf("Goldbach's conjecture is wrong.\n");
                    break;
              }
          
          }
    }
      return 0;
}