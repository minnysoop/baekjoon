#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i, sum = 0, l;
    for (i = 0; i < n; i++) {
        l = s[i] - '0';
        sum += l;
    }
    cout << sum << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}