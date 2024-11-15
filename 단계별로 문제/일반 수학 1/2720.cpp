#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;

        // Q, D, N, P
        int c[4] = {0, 0, 0, 0};
        c[3] = a / 25;
        a -= c[3]*25;
        c[2] = a / 10;
        a -= c[2]*10;
        c[1] = a / 5;
        a -= c[1]*5;
        c[0] = a;

        int i; for (i = 3; i >= 0; i--) cout << c[i] << " ";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}