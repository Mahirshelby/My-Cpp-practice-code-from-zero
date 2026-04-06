#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;


        int leftmost = max(l, -m);
        int rightmost = min(r, m);


        if (leftmost > 0 || rightmost < 0) {

            cout << "Impossible" << endl;
            continue;
        }


        int left_count = min(m/2, -leftmost);
        int right_count = m - left_count;

        if (right_count > rightmost) {
            int excess = right_count - rightmost;
            right_count = rightmost;
            left_count += excess;
        }

        int l_prime = -left_count;
        int r_prime = right_count;

        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}
