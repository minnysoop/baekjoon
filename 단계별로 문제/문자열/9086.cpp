#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        printf("%c%c\n", s[0], s[s.length()-1]);
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}