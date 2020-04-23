#include <iostream>
#include <cmath>
using namespace std;
int MAX = 1000000 ;
bool CRIBA[1000000];

void prime(){
	for(int i = 0; i < MAX; i++){
		CRIBA[i] = true;
	}
	CRIBA[1] = false;
	CRIBA[2] = true;
	for(int i = 2; i < sqrt(MAX); i++){
		if(CRIBA[i]){
			for(int j = i*i; j < MAX;  j +=i ){
				CRIBA[j] = false;
			}
		}
	}
} 

int main(){
	prime(); //Genera la criba
	int count = 0;
	int sol = 0;
	int index = 11; //primer primo de dos digitos
	int limit;
	cin>>limit;
	while(index < limit){
		if(!CRIBA[index]){
			index++;
			continue;
		}
		int n = index;
		index++;
		string cade = to_string(n); //convierte a entero
		bool flag = true;

		for(int i = 0; i <= cade.size(); i++){
			//verificamos si es primo el numero convertido a int
			if(!CRIBA[atoi(cade.substr(i,cade.size()).c_str())]){
				flag = false;
				break;
			}
		}
		if(!flag) continue;
		flag = true;
		for(int i = cade.size(); i >=0 ; i--){
			//verificamos si es primo el numero convertido a int
			if(!CRIBA[atoi(cade.substr(0,i).c_str())]){
				flag = false;
				break;
			}
		}
		if(!flag) continue;
		//cout<<n<<endl;
		sol +=n;
	}
	cout<<sol<<endl;
	return 0;
}