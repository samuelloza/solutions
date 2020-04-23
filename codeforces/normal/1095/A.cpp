#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	string cade;

	cin>>n>>cade;
	string encode = "";
	int i = 0;
	int j = 0;
	while(i <  n){
		encode = encode+cade[i];
		j++;
		i = j + i;
	}
	cout<<encode<<endl;

	return 0;
}


//0 1 3
//1 2