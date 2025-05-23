#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int nm = 100;
string s1, s2;
int n, m, k;

void TimMax()
{
    int bd = 0, kt =  n - m, csm = 57;
    while (bd < kt && m != 0)
    {
        for (int i = bd; i <= kt; i++)
            if (s1[i] == csm)
            {
                s2 = s2 + s1[i];
                bd = i+1;
                m--;
                kt = n - m;
                csm = 58;
                break;
            }
        csm--;
    }
    s2 = s2 + s1.substr(bd, m);
}

void BigSub()
{
    string kq = "";
    int muon = 0, so;
    while (s2.size() < s1.size()) s2 = "0"+s2;
    for (int i = s1.size()-1; i >= 0; --i) {
        int so1 = s1[i] - 48;
        int so2 = s2[i] - 48;
        if (so1 >= so2+muon) {
            so = so1-(so2+muon);
            muon = 0;
        }
        else {
            so = so1+10-(so2+muon);
            muon = 1;
        }
        kq = char(so+48) + kq;
    }
    while(kq[0] == '0') kq.erase(0,1);
    cout << kq;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input19.txt", "r", stdin);
    freopen("output19.txt", "w", stdout);
    cin >> s1 >> k;
    if (k == 0) cout << s1;
    else {
        n = s1.size();
        m = n-k;
        TimMax();
        BigSub();
    }
    return 0;
}
