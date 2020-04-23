#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
const int MAXN=100010;
struct node{
    int l,r,mx1,mx2;
} seg[MAXN*4];
int n,m,a[MAXN],m1,m2;
void build(int c,int l,int r){
    seg[c].l=l,seg[c].r=r;
    if(l==r){
        seg[c].mx1=a[l];
        return ;
    }
    int mid=(l+r)>>1;
    build(2*c+1,l,mid);
    build(2*c+2,mid+1,r);
    if(r-l==1){
        seg[c].mx1=max(seg[2*c+1].mx1,seg[2*c+2].mx1);
        seg[c].mx2=min(seg[2*c+1].mx1,seg[2*c+2].mx1);
    }
    else{
        if(seg[2*c+1].mx1>seg[2*c+2].mx1){
            seg[c].mx1=seg[2*c+1].mx1;
            seg[c].mx2=max(seg[2*c+1].mx2,seg[2*c+2].mx1);
        }
        else{
            seg[c].mx1=seg[2*c+2].mx1;
            seg[c].mx2=max(seg[2*c+2].mx2,seg[2*c+1].mx1);
        }
    }
}
void change(int c,int p,int num){
    int l=seg[c].l,r=seg[c].r;
    if(l==r){
        seg[c].mx1=num;
        return ;
    }
    int mid=(l+r)>>1;
    if(p<=mid) change(2*c+1,p,num);
    else change(2*c+2,p,num);
    if(r-l==1){
        seg[c].mx1=max(seg[2*c+1].mx1,seg[2*c+2].mx1);
        seg[c].mx2=min(seg[2*c+1].mx1,seg[2*c+2].mx1);
    }
    else{
        if(seg[2*c+1].mx1>seg[2*c+2].mx1){
            seg[c].mx1=seg[2*c+1].mx1;
            seg[c].mx2=max(seg[2*c+1].mx2,seg[2*c+2].mx1);
        }
        else{
            seg[c].mx1=seg[2*c+2].mx1;
            seg[c].mx2=max(seg[2*c+2].mx2,seg[2*c+1].mx1);
        }
    }
}
void que(int c,int L,int R){
    int l=seg[c].l,r=seg[c].r;
    if(l==L&&r==R){
        if(l==r){
            if(seg[c].mx1>m1){
                m2=m1;
                m1=seg[c].mx1;
            }
            else if(seg[c].mx1>m2)
                m2=seg[c].mx1;
        }
        else{
            if(seg[c].mx1>m1){
                m2=max(seg[c].mx2,m1);
                m1=seg[c].mx1;
            }
            else if(seg[c].mx1>m2)
                m2=seg[c].mx1;
        }
        return ;
    }
    int mid=(l+r)>>1;
    if(R<=mid)que(2*c+1,L,R);
    else if(L>mid)que(2*c+2,L,R);
    else{
        que(2*c+1,L,mid);
        que(2*c+2,mid+1,R);
    }
}
void input(){
    scanf("%d",&n);
    for(int i=1; i<=n; ++i)scanf("%d",&a[i]);
}
void solve(){
    char str[2];
    int a,b;
    build(0,1,n);
    scanf("%d",&m);
    for(int i=0; i<m; ++i){
        scanf("%s%d%d",str,&a,&b);
        if(str[0]=='Q'){
            m1=m2=-1;
            que(0,a,b);
            printf("%d\n",m1+m2);
        }
        else change(0,a,b);
    }
}
int main(){
    input();
    solve();
    return 0;
