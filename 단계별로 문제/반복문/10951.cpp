#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int a, b;
    while (cin >> a >> b) {
        cout << a + b << "\n";
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}