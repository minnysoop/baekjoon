#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int s[31];

    int i;
    for (i = 0; i < 31; i++) s[i] = 0;
    
    int t;
    while (cin >> t) {
        s[t] = t;
    }

    int j;
    for (j = 1; j < 31; j++) if (s[j] == 0) cout << j << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}