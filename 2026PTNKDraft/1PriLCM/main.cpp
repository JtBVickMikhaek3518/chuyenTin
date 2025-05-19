#include <bits/stdc++.h>
using namespace std;

int soLuongBoi(long long a, long long b, int c) {
    int count = 0;

    for (long long i = a; i < b; i++)
        if (i % c == 0)
            count++;

    return count;
}

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    long long a, b;
    int x, y, z;
    cin >> a >> b >> x >> y >> z;

    

    return 0;
}