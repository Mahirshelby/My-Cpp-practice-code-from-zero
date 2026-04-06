#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long result = 0;

        // Traverse every bit position (up to 30th bit for int range)
        for (int bit = 0; bit < 30; bit++) {
            int cnt1 = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] & (1 << bit)) cnt1++;
            }
            int cnt0 = n - cnt1;
            result += 1LL * cnt1 * cnt0 * (1LL << bit);
        }

        cout << result << "\n";
    }

    return 0;
}
