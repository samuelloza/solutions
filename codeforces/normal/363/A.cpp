#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <cstring>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	string cade;
	getline(cin,cade);
	for(int i=cade.size()-1;i>=0;i--){
		if(cade[i]=='0')printf("O-|-OOOO\n");
		if(cade[i]=='1')printf("O-|O-OOO\n");
		if(cade[i]=='2')printf("O-|OO-OO\n");
		if(cade[i]=='3')printf("O-|OOO-O\n");
		if(cade[i]=='4')printf("O-|OOOO-\n");
		if(cade[i]=='5')printf("-O|-OOOO\n");
		if(cade[i]=='6')printf("-O|O-OOO\n");		
		if(cade[i]=='7')printf("-O|OO-OO\n");
		if(cade[i]=='8')printf("-O|OOO-O\n");
		if(cade[i]=='9')printf("-O|OOOO-\n");
	}

	return 0;
}