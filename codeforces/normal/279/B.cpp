#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,dat;
	long long int t;
	scanf("%d %lld",&n,&t);
	vector<int> vec;
	for(int i=0;i<n;i++){
		scanf("%d",&dat);
		vec.push_back(dat);
	}
	int ma=-1;
	int taux=t;
	int ans2=0;
	for(int i=0;i<vec.size();i++){
		for(int j=i;j<vec.size();j++){
			if(taux>=vec[j]){
				ans2++;
				taux-=vec[j];
				//cout<<vec[j]<<endl;
			}else break;
		}
		taux=t;
		ma=max(ans2,ma);
		ans2=0;
	}
	cout<<ma<<endl;
	return 0;
}