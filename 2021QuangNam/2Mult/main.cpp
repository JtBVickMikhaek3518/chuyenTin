#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    int k;
    long long n, x;
    cin >> k;

    while (k--) {
        cin >> n >> x;
        cout << x / n << '\n';
    }

    return 0;
}