#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void readInt(int &n){
	int sign = 1;
	char c;
	bool found = false;
	n = 0;

	while(true){
		c = getc(stdin);

		switch(c){
			case '-' :
			sign = -1;
			found = true;
			break;
			case ' ':
			if(found) goto jump;
			break;
			case '\n':
			if(found) goto jump;
			break;
			default:
			if(c>='0' && c<='9'){
				n = n*10+c-'0';
				found = true;
			}else goto jump;
			break;
		}
	}

	jump:
	n *= sign;
}

int knapsack(vector<int> v, int bs) {
	int n = v.size();
	vector<int> dp(v.size(),0);
	int sol=0;
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for (int i = 0; i < n; i++){ 
		if(dp[i]+v[i]<=bs){
			dp[i]+=v[i];
			sol=max(dp[i],sol);
		}
		for (int a = 0; a < n; a++){
			if(a!=i){
				if((dp[i]+v[a]<= bs)){
					dp[i]+=v[a];
					if(max(dp[i],sol) <= bs){	
						sol=max(dp[i],sol);
						if(sol==bs or sol==bs-1){
							return bs;
						}
					}
				}
			}
		}
	}
	int ans=0;
	for(int i=0;i<v.size();i++){
		ans=max(dp[i],ans);
	}
	return ans;
}

int main() {
	int test;
	readInt(test);
	while(test--){
		int W, n;
		readInt(W);
		readInt(n);
		vector<int> v, w;
		int tmp;
		bool sol=false;
		for (int i = 0; i < n; i++) {
			readInt(tmp);	
			if(tmp < W){
				v.push_back(tmp);
			}else if(tmp==W){
				sol=true;
			}
		}
		if(sol){
			printf("%d\n", W);
		}else{	
			printf("%d\n", knapsack(v,W));
		}
	}
	return 0;
}
/*
2
16 4
32 14 44 3
50 8
30 10 2 1 18 3 8 7
*/

