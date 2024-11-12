#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int r; string s;
        cin >> r >> s;
        string ns = "";
        int n = s.length(), i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < r; j++) ns += s[i];
        }
        cout << ns << "\n";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}