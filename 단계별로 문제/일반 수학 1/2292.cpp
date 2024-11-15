#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    cin >> n;

    int i = 1, c = 1;
    while (i < n) {
        i += 6*c;
        c++;
    }
    cout << c << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}
