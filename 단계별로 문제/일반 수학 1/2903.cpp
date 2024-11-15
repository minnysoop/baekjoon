#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int power(int base, int exponent) {
    int res = 1, i;
    for (i = 0; i < exponent; i++) {
        res *= base;
    }
    return res;
}

void solve() {
    int n; cin >> n;
    // n = 1, l = 2, (l+1)^2 = 9
    // n = 2, l = 4, (l+1)^2 = 25
    // n = 3, l = 8, (l+1)^2 = 81
    // n = 4, l = 16 (l+1)^2 = 289
    // n = 5, l = 32 (l+1)^2 = 1089
    cout << power((power(2, n) + 1), 2) << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}