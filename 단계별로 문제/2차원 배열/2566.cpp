#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int a[9][9];
    int i, j;
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }

    int max = -1;
    int mxi, mxj;
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                mxi = i+1;
                mxj = j+1;
            }
        }
    }
    cout << max << "\n" << mxi << " " << mxj << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}