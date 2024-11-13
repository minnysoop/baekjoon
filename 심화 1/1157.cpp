#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int a[26], i;
    for (i = 0; i < 26; i++) a[i] = 0;
    string s;
    cin >> s;
    int n = s.length();
    for (i = 0; i < n; i++) {
        if (s[i] >= 'a') a[s[i] - 'a']++;
        else a[s[i] - 'A']++;
    }

    int max = a[0], ch = 0;
    for (i = 1; i < 26; i++){
        if (a[i] > max) {
            max = a[i];
            ch = i;
        }
    }

    bool dup = false;
    for (i = 0; i < 26; i++){
        if (a[i] == max && i != ch) {
            dup = true;
            break;
        }
    }

    if (dup) cout << "?\n";
    else cout << (char) ('A' + ch) << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}