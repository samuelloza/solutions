#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x>>y;
		bool sw = true;
		int ii = 1;
		for(int i = x; i <= y && sw; i++){
			for(int j = y ; j>=i && sw;j-- ){
				if(i!=j){
					if(j%i == 0){
						cout<<i<<" "<<j<<endl;
						sw = false;
					}
				}
			}
		}
	}
	return 0;
}