#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count[1001] = {0}; // ইনপুট সংখ্যা 0 থেকে 1000 এর মধ্যে হবে ধরা হল
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            count[x]++;
        }

        int mn = -1, mx = -1;

        // min বের করা
        for (int i = 0; i <= 1000; ++i) {
            if (count[i] > 0) {
                mn = i;
                break;
            }
        }

        // max বের করা
        for (int i = 1000; i >= 0; --i) {
            if (count[i] > 0) {
                mx = i;
                break;
            }
        }

        if ((mn + mx) % 2 == 0)
            cout << 0 << endl; // Already fashionable
        else
            cout << 1 << endl; // Just remove one element
    }

    return 0;
}
