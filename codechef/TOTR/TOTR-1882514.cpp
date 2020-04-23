#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int n;
	string cad,cad2;
	while(cin>>n>>cad){
		getchar();
		while(n--){
			getline(cin,cad2);
			for(int i=0;i<cad2.size();i++){
				if(isalpha(cad2[i])){
					if(islower(cad2[i]))
						cout<<(cad[cad2[i]-'a']);
					else putchar(toupper(cad[cad2[i]-'A']));
				}
				else if(cad2[i]=='_'){
					cout<<" ";
				}				
				else putchar(cad2[i]);
			}
			cout<<endl;
		}
	}
	return 0;
}