#include <stdio.h>
#include <string.h>
#define MAX_ZNAKOVA 1000
char niz_znakova[MAX_ZNAKOVA + 2];
int duljina_niza;
int rjesenje;


//

int palindrom(int pocetak,int kraj)
{
    while (1)
    {
        if (niz_znakova[pocetak] != niz_znakova[kraj])
            return 0;

        ++pocetak;
        --kraj;

        if (pocetak >= kraj)
            break;
    }

    return 1;
}

void rijesi(void)
{
    int i,j;
    int polje[MAX_ZNAKOVA];
    int minimalno;

    for (i = 0; i < duljina_niza; ++i)
    {
        if (palindrom(0,i))
        {
            polje[i] = 1;
            continue;
        }
        minimalno = 0;

        for (j = 0; j < i; ++j)
            if (palindrom(j + 1,i) && (!minimalno || polje[j] < minimalno))
                minimalno = polje[j];

        polje[i] = minimalno + 1;
    }

    rjesenje = polje[duljina_niza - 1];
}
void ispisi_rjesenje(void)
{
    printf("%d\n",rjesenje);
}

int main(void)
{

    scanf("%s",niz_znakova);
    duljina_niza = strlen(niz_znakova);
    rijesi();
    ispisi_rjesenje();


    return 0;
}
