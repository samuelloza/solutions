#include <cstdio>
#include <cmath>
 
using namespace std;
 
double a,b,c,d,e,f;
 
#define s(x) (x*x)
 
double t(double a,double b,double c) {
  double p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}
 
int main() {
  int ncase;
  scanf("%d",&ncase);
  while (ncase--) {
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
    double v = s(a*b*e)+s(a*b*f)+s(a*c*d)+s(a*c*f)+s(a*d*f)+s(a*f*e)
              +s(b*c*d)+s(b*c*e)+s(b*d*e)+s(b*f*e)+s(c*d*e)+s(c*d*f)
              -s(a*b*d)-s(a*c*e)-s(b*c*f)-s(d*e*f)
              -s(c*c*d)-s(c*d*d)-s(a*a*f)-s(a*f*f)-s(b*b*e)-s(b*e*e);
    v = sqrt(v)/12;
    double s = t(a,b,d)+t(a,c,e)+t(b,c,f)+t(d,e,f);
    printf("%.4f\n",v/s*3);
  }
  return 0;
}