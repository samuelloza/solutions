#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
int main(){
	string cad;
	while(cin>>cad){
		stack<char> s;
		//stack<char> t;
		int c=0;
		for (int i = 0; i < cad.size(); i++){
			if(s.empty()){
				s.push(cad[i]);
			}else{
				if(s.top()=='(' && cad[i]==')'){
					c++;
					s.pop();
				}else{
					s.push(cad[i]);
				}

			} 
		}
		cout<<c*2<<endl;
	}
	return 0;
}