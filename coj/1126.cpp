#include <stdio.h>
#include <math.h>
#define dis(x1,y1,x2,y2) sqrt(fabs((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)))
#define PI 3.141592653589793
double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = dis(x1,y1,x2,y2);
    double b = dis(x2,y2,x3,y3);
    double c = dis(x3,y3,x1,y1);
    double s = (a+b+c)/2.0;
    double r = (a*b*c)/sqrt(s*(s-a)*(s-b)*(s-c))/2.0/2.0;
    return (2.0*PI*r);
}

int main()
{
    double x1,y1,x2,y2,x3,y3;

    while (scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        printf("%.2lf\n",area(x1,y1,x2,y2,x3,y3));
    }
    return 0;
}