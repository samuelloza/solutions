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


#define pb push_back
#define pi 3.1415926535897932

typedef pair < int, int >pii;
typedef long long ll;
typedef long double ld;

#define MAX 5000005
int main() {
/*	ifstream cin("input.txt");
ofstream cout("output.txt");*/
	int x;
	int h, m;
	while (scanf("%d", &x) == 1) {
		int n = 1;
		int aux = 1;
		bool sw = false;
		vector < int >ve;
		while (x--) {
			scanf("%d %d", &h, &m);
			ve.pb(h * 60 + m);
		}
		for (int i = 1; i < ve.size(); i++) {
			if (ve[i - 1] - ve[i] == 0) {
				n++;
				aux = max(aux, n);
			} else {
				n = 1;
			}
		}
		cout << aux << endl;
	}
	return 0;
}