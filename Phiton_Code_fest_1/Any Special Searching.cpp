#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector < long long > prefix_sum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        long long num;
        cin >> num;
        prefix_sum[i] = prefix_sum[i - 1] + num;
    }

    int q;
    cin >> q;
    while (q--) {
        long long s;
        cin >> s;

        int idx = lower_bound(prefix_sum.begin(), prefix_sum.end(), s) - prefix_sum.begin();
        if (idx > n) cout << -1 << '\n';
        else cout << idx << '\n';
    }

    return 0;
}