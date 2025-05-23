#include <bits/stdc++.h>
using namespace std;

string sn, sm, res = "";
int n, m, k;

void findMax() {
    int start = 0, end = n - m, csm = 57;

    while (start < end && m != 0) {
        for (int i = start; i <= end; i++)
            if (sn[i] == csm) {
                sm = sm + sn[i];
                start = i + 1;
                m--;
                end = n - m;
                csm = 58;
                break;
            }
        csm--;
    }

    sm = sm + sn.substr(start, m);
}

void bigSub() {
    int muon = 0, so, so1, so2;

    while (sm.size() < sn.size())
        sm = "0" + sm;

    for (int i = sn.size() - 1; i >= 0; i--) {
        so1 = sn[i] - 48;
        so2 = sm[i] - 48;

        if (so1 >= so2 + muon) {
            so = so1 - (so2 + muon);
            muon = 0;
        }

        else {
            so = so1 - (so2 + muon) + 10;
            muon = 1;
        }

        res = char(so + 48) + res;
    }

    while (res[0] == '0')
        res.erase(0, 1);
}

int main() {

    // Tăng tốc nhập xuất khi testcase lớn
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    cin >> sn;
    cin >> k;

    if (k == 0) cout << sn;
    else {
        n = sn.size();
        m = n - k;

        findMax();
        bigSub();
        cout << res;
    }

    return 0;
}