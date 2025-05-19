#include <bits/stdc++.h>
using namespace std;

int lcmNoFlow(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    long long a, b;
    int x, y, z;
    cin >> a >> b >> x >> y >> z;

    int dx = b / x - (a - 1) / x;
    int dy = b / y - (a - 1) / y;
    int dz = b / z - (a - 1) / z;

    int dxy = b / lcmNoFlow(x, y) - (a - 1) / lcmNoFlow(x, y);
    int dyz = b / lcmNoFlow(y, z) - (a - 1) / lcmNoFlow(y, z);
    int dxz = b / lcmNoFlow(x, z) - (a - 1) / lcmNoFlow(x, z);

    int ox, oy, oz;
    int dxyz = b / lcmNoFlow(lcmNoFlow(x, y), z) - (a - 1) / lcmNoFlow(lcmNoFlow(x, y), z);

    ox = dx - dxy - dxz + dxyz;
    oy = dy - dxy - dyz + dxyz;
    oz = dz - dxz - dyz + dxyz;

    int result = ox + oy + oz;
    cout << result;

    return 0;
}