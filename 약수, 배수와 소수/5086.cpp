#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a%b == 0) cout << "multiple\n";
        else if (b%a == 0) cout << "factor\n";
        else cout << "neither\n";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}