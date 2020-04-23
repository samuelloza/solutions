#include <iostream>
#include <cstdio>
int jose[] = {0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};

int main() 
{
    int nume;
    while(scanf("%d",&nume) && nume!=0)
    {
          printf("%d\n",jose[nume]);        
    }
    return 0;
}