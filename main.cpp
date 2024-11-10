#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    cout << s[n-1] << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}