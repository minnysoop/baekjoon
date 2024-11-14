#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int a[n][m], b[n][m];
    
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> t;
            a[i][j] = t;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> t;
            a[i][j] += t;
        }
    }
    
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}