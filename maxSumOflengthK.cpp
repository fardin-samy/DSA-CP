#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int a[N];

int main() {
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int sum = 0, ans = 0;
    for (int i = 1; i <= n; ++i) {
        sum += a[i];
        if (i >= k) {
            ans = max(ans, sum);
            sum -= a[i - k + 1];
        }
    }

    cout << ans << endl;
    return 0;
}
