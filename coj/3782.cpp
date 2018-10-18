#include <iostream>
#include <cstdio>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int vec[6];
		int a,old;
		bool sw = 1;
		for(int i = 0; i < 5; i++){
			cin>>a;
			if( sw == 0)continue;
			if(i == 0){
				old = a;
				continue;
			}
			if(old + 1 != a){
				cout<<"N"<<endl;
				sw = 0;
			}

			old = a;
		}
		if(sw == 1){
			cout<<"Y"<<endl;
		}
	}
	return 0;
}