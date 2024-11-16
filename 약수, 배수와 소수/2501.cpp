#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int factors[n/2+1]; int cursor = 0; int f = 1;
    int i; for (i = 0; i < n/2+1; i++) factors[i] = 0;
    for (f = 1; f < n/2+1; f++) {
        if (n%f == 0) {
            factors[cursor] = f;
            cursor++;
        }
    }
    factors[cursor] = n;

    if (k > n/2) cout << 0 << "\n";
    else cout << factors[k-1] << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}