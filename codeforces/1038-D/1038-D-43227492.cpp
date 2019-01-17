#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    ll res = 0, k = 1e15;
    bool flag = false;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i], res += abs(v[i]);
    if (n == 1) {
        cout << v[0] << endl;
        return 0;
    }
    ll res2 = 0;
    for (int i = 1; i < n; ++i) {
        if ((v[i] >= 0) xor (v[i - 1] >= 0)) flag = true;
        else res2 = max(res2, res - abs(v[i]) - abs(v[i - 1]) + abs(v[i] - v[i - 1]));
    }
    cout << (flag ? res : res2) << endl;
    return 0;
}