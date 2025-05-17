#include <bits/stdc++.h>
using namespace std;

int lienTiepTongK(int a[], int n, int k = 0) {
    int sum = 0, maxlen = 0;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) maxlen = i + 1;

        if (mp.find(sum) == mp.end())
            mp[sum] = i;

        if (mp.find(sum - k) != mp.end())
            if (i - mp[sum - k] > maxlen)
                maxlen = i - mp[sum - k];
    }

    return maxlen;
}

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << lienTiepTongK(a, n);

    return 0;
}