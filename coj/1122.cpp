#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <iostream>
#define PI acos(-1.0)
using namespace std;
int main()
{
 int t,cas=1;
 double R,n;
 scanf("%d", &t);
 while(t-- && scanf("%lf%lf", &R, &n))
 {
   double a=PI/n;
   printf("Scenario #%d:\n%.3f\n\n",cas++,R*sin(a)/(1+sin(a)));
 }
 return 0;
}