#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    cin >> n;

    int center = n-1, spread = 0;
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n*2-1; j++) {
            if (j >= center - spread && j <= center + spread) {
                cout << "*";
                if (j == center + spread) break;
            } else cout << " ";
        }
        spread++;
        cout << "\n";
    }

    for (i = 0; i < n*2-1; i++) cout << "*";
    cout << "\n";

    spread = n-2;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n*2-1; j++) {
            if (j >= center - spread && j <= center + spread) {
                cout << "*";
                if (j == center+spread) break;
            }
            else cout << " ";
        }
        spread--;
        cout << "\n";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}