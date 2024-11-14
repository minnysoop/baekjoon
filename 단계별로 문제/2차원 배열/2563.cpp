#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int d[101][101];
    int i, j;
    for (i = 1; i < 101; i++){
        for (j = 1; j < 101; j++) {
            d[i][j] = 0;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        for (i = (b-1)+10; i >= b; i--) {
            for (j = a; j < a+10; j++) {
                d[i][j] = 1;
            }
        }
    }

    int area = 0;
    for (i = 1; i < 101; i++){
        for (j = 1; j < 101; j++){
            if (d[i][j] == 1) area++;
        }
    }
    cout << area << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}