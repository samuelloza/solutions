#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#define MAX 100000+1
#define MOD 1000000007
using namespace std;
int vec[MAX];
long long int dis[MAX];
void init(int n){
	for (int i = 1; i <= n; i++){
		vec[i]=i;
		dis[i]=0;
	}
}
int Find(int a){
	if(vec[a]==a){
		return a;
	}else return vec[a]=Find(vec[a]);
	//else return Find(vec[a]);
}

void Union(int x , int y){
    int xRoot = Find(x);
    int yRoot = Find(y);
    vec[xRoot] = yRoot;
}

bool sameComponent(int x , int y){
    if(Find(x) == Find(y)) return true;
    return false;
}

int main(){
	int k,a,b,x,y;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&a,&b);
		init(a);
		while(b--){
			scanf("%d %d",&x,&y);
			Union(x,y);
		}
		for(int i=1;i<=a;i++){
			dis[Find(i)]++;
		}	
		long long int r=0;
		long long int m=1;
		for(int i=1;i<=a;i++){
			if(i==vec[i]){
				r++;
				m=(dis[i]*m)%MOD;
			}
		}
		cout<<r<<" "<<m<<endl;

	}
	return 0;
}