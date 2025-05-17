#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    int a, b;
    cin >> a >> b;

    if (a < b) swap(a, b);
    if (a % b == 0) {
        if (a == b) cout << a;
        else cout << a - b;
    }
    else cout << lcm(a, b) - a - b;

    return 0;
}