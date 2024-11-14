#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int p[] = {1, 1, 2, 2, 2, 8};
    int t, i = 0;
    while (i < 6) {
        cin >> t;
        p[i] -= t;
        i++;
    }
    for (i = 0; i < 6; i++) cout << p[i] << " ";
    cout << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}