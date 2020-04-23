#include<stdio.h>
#include<math.h>
double range(double T,double H)
{
    double h,e;
    h=H-T;
    e=(h/0.5555)+10.0;
    e=e/6.11;
    e=1.0/273.16-log(e)/5417.7530;
    e=(1.0/e)-273.16;
    return e;
}
int main()
{
    double T,D,H,e,h,s;
    char a,b;
    while(scanf("%c",&a),a!='E')
    {
        scanf(" %lf %c %lf",&e,&b,&h);
        if(a!='D'&&b!='D')
        {
            if(a=='T')
            {
                T=e;
                H=h;
            }
            else
            {
                T=h;
                H=e;
            }
            D=range(T,H);
            printf("T %.1lf D %.1lf H %.1lf\n",T,D,H);
        }
        else
        {
            if(a=='D')
            {
                D=e;
                s=0.5555*((6.11*pow(2.718281828,5417.7530*((1.0/273.16)-(1.0/(D+273.16)))))-10.0);
                if(b=='H')
                {
                    H=h;
                    T=H-s;
                }
                else
                {
                    T=h;
                    H=T+s;
                }
                printf("T %.1lf D %.1lf H %.1lf\n",T,D,H);
            }
            else
            {
                D=h;
                s=0.5555*((6.11*pow(2.718281828,5417.7530*((1.0/273.16)-(1.0/(D+273.16)))))-10.0);
                if(a=='H')
                {
                    H=e;
                    T=H-s;
                }
                else
                {
                    T=e;
                    H=T+s;
                }
                printf("T %.1lf D %.1lf H %.1lf\n",T,D,H);
            }
        }
        getchar();
    }
    return 0;
}
