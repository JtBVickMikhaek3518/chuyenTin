// CHƯA XONG

#include <bits/stdc++.h>
using namespace std;

string ketQua(string sn, string sm) {
    string result;

    while (sm.length() < sn.length())
        sm = '0' + sm;
    
    int muon = 0, so, so1, so2;
    for (int i = sn.length(); i >= 0; i--) {
        so1 = sn[i] - '0';
        so2 = sm[i] - '0';

        if (so1 >= so2 + muon) {
            so = so1 - (so2 + muon);
            muon = 0;
        }

        else if (so1 < so2 + muon) {
            so = (so1 + 10) - (so2 + muon);
            muon = 1;
        }

        result = char(so + '0') + result;
    }

    while (sm[0] == '0')
        sm.erase(sm.begin());

    return result;
}

int main() {

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    string sn, sm;
    int n, m, k;
    int maxDigit = 57;

    cin >> sn;
    cin >> k;

    n = sn.length();
    m = n - k;

    int start = 0;
    int end = n - m;

    while (start < end && m != 0)
        for (int i = start; i < end; i++)
            if (sn[i] == maxDigit) {
                sm += sn[i];
                start = i + 1;
                m--;
                end = n - m;
                maxDigit = 58;
            }
            maxDigit--;

    for (int i = start; i < sn.length(); i++)
            sm += sn[i];

    cout << ketQua(sn, sm);

    return 0;
}