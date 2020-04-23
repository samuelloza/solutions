#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int t, n, c;
bool flag = false;
string temp;
vector<string> numbers;

int main() {
    scanf("%d\n", &t);
    while (t--) {
        scanf("%d\n", &n);
        numbers.clear();
        flag = false;
        c = n;
        while (c--) {
            cin >> temp;
            numbers.push_back(temp);
        }
        sort(numbers.begin(), numbers.end());
        for (int i=0 ; i<n-1 ; i++) {
            if (numbers[i+1].find(numbers[i], 0) != string::npos) {
                flag = true;
                break;
            }
        }

        flag ? printf("NO\n") : printf("YES\n");
    }
