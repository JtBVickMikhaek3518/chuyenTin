#include <bits/stdc++.h>
using namespace std;

long long powNoFlow(int a, int b) {
    long long s = 1;

    for (int i = 1; i <= b; i++) {
        s *= a;
        s %= INT_MAX;
    }

    return s;
}

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    int n;
    cin >> n;
    int p[n], a, x;
    long long y = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];

        a = p[i] / 10;
        x = p[i] % 10;
        y += powNoFlow(a, x);
    }

    cout << y;

    return 0;
}