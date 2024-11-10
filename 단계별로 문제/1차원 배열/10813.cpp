#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int b[n];

    int x;
    for (x = 0; x < n; x++) b[x] = x+1;

    int y;
    for (y = 0; y < m; y++) {
        int i, j;
        cin >> i >> j;

        int t = b[i-1];
        b[i-1] = b[j-1];
        b[j-1] = t;
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