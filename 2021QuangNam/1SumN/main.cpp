#include <iostream>
using namespace std;

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    int sum = 0;
    string n; cin >> n;
    for (int i = 0; i < n.length(); i++)
        sum += n[i] - '0';

    cout << sum;

    return 0;
}