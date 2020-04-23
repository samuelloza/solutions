#include <algorithm>
#include <iostream>
#include <iterator>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>

#define ll long long
#define lld long long int
#define sc scanf
#define pi 2*acos(0.0)
#define f first
#define s second
#define sz size()
#define mp make_pair
#define r(input) freopen("c.in","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define clr(a)  memset(a,0,sizeof(a))
#define pb push_back
#define inf 1000000000 
#define mod = 1000000009;
using namespace std;
int MinRotLex(const char *s, const int slen) {
  //for(int j=0;j<slen;j++){
  //    cout<<s[j];      
  // }
	int i = 0, j = 1, k = 0, x, y, tmp;
	while(i < slen && j < slen && k < slen) {
		x = i + k;
		y = j + k;
		if(x >= slen)  x -= slen;
		if(y >= slen)  y -= slen;
		if(s[x] == s[y]) {
			k++;
		} else if(s[x] > s[y]) {
			i = j+1 > i+k+1 ? j+1 : i+k+1;
			k = 0;
			tmp = i, i = j, j = tmp;
		} else {
			j = i+1 > j+k+1 ? i+1 : j+k+1;
			k = 0;
		}
	}
	return i;
}

int main(){
	char str[1000000];
	//"zyx", "xzy", "yxz"
	gets(str);
	//printf("%d\n",MinRotLex(str,strlen(str))+1);

	int m,l,r;
	sc("%d",&m);
	vector<string > pos;
	//cout<<" --- "<<str<<endl;
	for(int i=0;i<m;i++){
		sc("%d %d",&l,&r);
		if(l==r){
			printf("YES\n");
		}else{
			int ans=MinRotLex(str+l-1,abs(l-r)+1);
			string aux="";
			for(int j=0;j<3;j++){
				if(ans==abs(l-r)+1){
					ans=0;
				}else ans++;
				aux+=str[ans];
			}
		//	cout<<i<<" **  "<<aux<<endl;
			if(aux=="xzy" or aux=="zyx" or aux=="yxz"){
				printf("YES\n");
			}else{
				int co=0;
				char str2[1000000];
				for(int i=l-1;i<r;i++){
					if(str[i]!=str[i+1]){
						str2[co]=str[i];
						co++;
					}
				}
				if(str[co-3]!=str[co-2]){
					str2[co]=str[co];
					co++;
				}
				str2[co]='\0';
				//cout<<str2<<" ----------- "<<l<<" "<<r<<endl;
				int ans2=MinRotLex(str2-1,strlen(str2)+1);
				aux="";
				for(int j=0;j<3;j++){
					if(ans==strlen(str2)-1){
						ans=0;
					}else ans++;
					aux+=str2[ans];
				}
				//cout<<aux<<" ###" <<endl;
				if(aux=="xzy" or aux=="zyx" or aux=="yxz")
					printf("YES\n");
				else printf("NO\n");

			}
		}
	}
	return 0;
}
/*
Find any continuous subsequence (substring) 
of three characters of string q, which doesn't 
equal to either string "zyx", "xzy", "yxz". 
If q doesn't contain any such subsequence,

 terminate the algorithm, otherwise go to step 2.
Rearrange the letters of the found subsequence randomly and go to step 1.

*/