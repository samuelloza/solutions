#include <iostream>
using namespace std;
int main()
{
    int a,y,dia,m,d;
    int A=1,ii,M;
    cin>>ii;
    string vec[8] {"SUNDAY", "MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY",};
    string mo[13] {" ","JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    for(int i=0; i<ii; i++)
    {
        string mes;
        cin>>A>>mes>>dia;
        for(int j=0; j<12; j++)
        {
            if(mo[j].compare(mes)==0)
            {
                M=j;
            }
        }
        a=(14-M)/12;
        y=A-a;
        m=M+12*a-2;
        d=(dia+y+y/4-y/100+y/400+(31*m)/12)%7;
        cout<<vec[d]<<endl;
    }
    return 0;
}