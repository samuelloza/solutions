#include<stdio.h>
#include<string.h>

int UINT_HASH_SIZE;
unsigned uint_hash_n[2000000];
int uint_hash_d[2000000];

void uintHashClear()
{
    memset(uint_hash_d,0,UINT_HASH_SIZE*sizeof(int));
}

int uintHashFunction(unsigned a)
{
    return (a*1007)%UINT_HASH_SIZE;
}

int uintHashGet(unsigned a)
{
    int i=uintHashFunction(a);
    for(;;)
    {
        if(uint_hash_n[i]==a && uint_hash_d[i]) break;
        if(!uint_hash_d[i]) break;
        i++;
        if(i==UINT_HASH_SIZE) i=0;
    }
    if(uint_hash_n[i]!=a) return 0;
    return uint_hash_d[i];
}

int uintHashIncrease(unsigned a)
{
    int i=uintHashFunction(a);
    for(;;)
    {
        if(uint_hash_n[i]==a && uint_hash_d[i]) break;
        if(!uint_hash_d[i]) break;
        i++;
        if(i==UINT_HASH_SIZE) i=0;
    }
    uint_hash_n[i]=a;
    return ++uint_hash_d[i];
}

int main()
{
    int k,n,res,size;
    unsigned sum;

    scanf("%d",&size);
    while(size--)
    {
        scanf("%d",&n);
        UINT_HASH_SIZE=n*2;
        uintHashClear();
        res=0;
        sum=0;
        uintHashIncrease(0);
        while(n--)
        {
            scanf("%d",&k);
            sum+=k;
            res+=uintHashGet(sum-47);
            uintHashIncrease(sum);
        }
        printf("%d\n",res);
    }

    return 0;
}
