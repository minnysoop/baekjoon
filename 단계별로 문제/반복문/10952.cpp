#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << a + b << "\n";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}