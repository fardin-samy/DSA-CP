#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
long long a[N], d[N];

int main() {
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        d[i] = a[i] - a[i - 1];
    }

    while (q--) {
        int l, r, x; cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;
    }

    for (int i = 1; i <= n; ++i) {
        a[i] = a[i - 1] + d[i];
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}
