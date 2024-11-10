#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int b[n];

    int x;
    for (x = 0; x < n; x++) b[x] = 0;

    int y;
    for (y = 0; y < m; y++) {
        int i, j, k;
        cin >> i >> j >> k;

        int l;
        for (l = i-1; l < j; l++) {
            b[l] = k;
        }
    }

    int p;
    for (p = 0; p < n; p++) cout << b[p] << " ";
    cout << "\n";
    
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}