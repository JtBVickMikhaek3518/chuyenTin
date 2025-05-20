#include <bits/stdc++.h>
using namespace std;

string s;
int count = 0;

bool palindCheck(int left, int right) {
    for (int i = left; i < right; i++) {
        if (s[left] != s[right]) return 0;
        left++; right--;
    }

    return 1;
}

void backtrack(int b = 0) {
    if (b == s.size()) {
        ::count++;
        return;
    }

    for (int e = b; e < s.size(); e++)
        if (palindCheck(b, e))
            backtrack(e + 1);
}

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    cin >> s;
    backtrack();
    cout << ::count;

    return 0;
}