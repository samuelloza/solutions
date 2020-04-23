#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <climits>
using namespace std;
char str[1100];
int ones[3]= {1,4,7};
int twos[3]= {2,5,8};
int zeros[4]= {0,3,6,9};
int cnt[10];
int res[10];

bool cmp(int n11,int n12,int n21,int n22,int flag)
{
    if(flag)
    {
        cnt[5]--;
        n12--;
        n22--;
    }
    int tmp1[10]= {0},tmp2[10]= {0};
    memset(tmp1,0,sizeof(tmp1));
    memset(tmp2,0,sizeof(tmp2));
    for(int i=2; i>=0; i--)
    {
        tmp1[ones[i]]+=min(cnt[ones[i]],n11);
        n11-=min(cnt[ones[i]],n11);
        tmp2[ones[i]]+=min(cnt[ones[i]],n21);
        n21-=min(cnt[ones[i]],n21);
        tmp1[twos[i]]+=min(cnt[twos[i]],n12);
        n12-=min(cnt[twos[i]],n12);
        tmp2[twos[i]]+=min(cnt[twos[i]],n22);
        n22-=min(n22,cnt[twos[i]]);

    }
    if(flag)
    {
        cnt[5]++;
    }
    for(int i=9; i>=0; i--)
    {
        if(tmp1[i]!=tmp2[i])
            return tmp1[i]<tmp2[i];
    }
    return false;
}



void work()
{
    int len=strlen(str);
    memset(cnt,0,sizeof(cnt));
    memset(res,0,sizeof(res));
    for(int i=0; i<len; i++)
    {
        cnt[str[i]-'0']++;
    }
    for(int i=0; i<4; i++)
    {
        res[zeros[i]]+=cnt[zeros[i]];
    }
    int r1s=0,r2s=0,n1s=0,n2s=0;
    int tot=0;
    for(int i=0; i<3; i++)
    {
        n1s+=cnt[ones[i]];
        n2s+=cnt[twos[i]];
    }
    if(cnt[0])
    {
        for(int i=n1s; i>=0; i--)
        {
            for(int j=n2s; j>=0; j--)
            {
                if((i+2*j)%3==0)
                {

                    if(tot<i+j)
                    {
                        tot=i+j;
                        r1s=i,r2s=j;
                    }
                    else if(tot==i+j)
                    {
                        if(cmp(r1s,r2s,i,j,0))
                        {
                            tot=i+j;
                            r1s=i,r2s=j;
                        }
                    }
                    break;
                }
            }
        }
        bool bingo=false;
        for(int i=2; i>=0; i--)
        {
            res[ones[i]]+=min(r1s,cnt[ones[i]]);
            r1s-=min(r1s,cnt[ones[i]]);
            res[twos[i]]+=min(r2s,cnt[twos[i]]);
            r2s-=min(r2s,cnt[twos[i]]);
        }
        for(int i=9; i>=1; i--)
        {
            if(res[i])
            {
                bingo=true;
                break;
            }
        }
        if(bingo)
        {
            for(int i=9; i>=0; i--)
            {
                for(int j=0; j<res[i]; j++)
                    putchar(i+'0');
            }
            puts("");
        }
        else
        {
            puts("0");
        }
    }
    else if(cnt[5])
    {
        for(int i=n1s; i>=0; i--)
        {
            for(int j=n2s; j>=1; j--)
            {
                if((i+2*j)%3==0)
                {
                    if(tot<i+j)
                    {
                        tot=i+j;
                        r1s=i,r2s=j;
                    }
                    else if(tot==i+j)
                    {
                        if(cmp(r1s,r2s,i,j,1))
                        {
                            tot=i+j;
                            r1s=i,r2s=j;
                        }
                    }
                    break;
                }
            }
        }
        if(r2s)
        {
            r2s--;
            cnt[5]--;
        }
        else
        {
            puts("impossible");
            return;
        }
        bool bingo=false;
        for(int i=2; i>=0; i--)
        {
            res[ones[i]]+=min(r1s,cnt[ones[i]]);
            r1s-=min(r1s,cnt[ones[i]]);
            res[twos[i]]+=min(r2s,cnt[twos[i]]);
            r2s-=min(r2s,cnt[twos[i]]);
        }
        for(int i=9; i>=1; i--)
        {
            if(res[i])
            {
                bingo=true;
                break;
            }
        }
        if(bingo)
        {
            for(int i=9; i>=1; i--)
            {
                for(int j=0; j<res[i]; j++)
                    putchar(i+'0');
            }
            puts("5");
        }
        else
        {
            puts("impossible");
            return ;
        }
    }
    else
        puts("impossible");
}

int main()
{
    int T;
    scanf("%d\n",&T);
    while(T--)
    {
        gets(str);
        work();
    }

    return 0;
}