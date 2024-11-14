#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length(), i;
    for (i = 0; i < n/2; i++){
        if (s[i] != s[n-i-1]) {cout << "0\n"; break;}
    }
    if (i == n/2) cout << "1\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}