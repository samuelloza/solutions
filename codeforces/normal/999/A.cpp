#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> vec;
	int sol = 0;
	bool sw = true;
	while(n--){
		int tmp;
		cin>>tmp;
		vec.push_back(tmp);
		if(sw){
			if(tmp <= k){
				sol++;
			}else{
				sw = false;
			}
		}
	}

	for(int i = vec.size() - 1; i >= 0; i-- ){
		if(vec[i] <= k){
			sol++;
		}else{
			break;
		}
	}

	if(sol > vec.size()){
		cout<<vec.size()<<endl;
	}else{
		cout<<sol<<endl;
	}
	return 0;
}