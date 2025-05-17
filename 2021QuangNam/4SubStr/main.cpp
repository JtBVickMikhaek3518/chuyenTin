#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    int k; cin >> k;
    string w; cin >> w;
    int count = 0, sum = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < w.length(); i++) {
        sum += (w[i] - '0');

        if (sum == k)
            count++;

        if (mp.find(sum - k) != mp.end())
            count++;

        mp[sum]++;
    }

    cout << count;

    return 0;
}