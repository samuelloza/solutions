#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <sstream>
#include <fstream>

using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < s.length();i++) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";return 0;;
}