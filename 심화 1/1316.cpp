#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    cin >> n;
    int c = 0;
    while (n--) {
        string s;
        cin >> s;

        int a[26];
        int i;
        for (i = 0; i < 26; i++) a[i] = 0;

        a[s[0] - 'a']++;

        int sz = s.length();
        bool isGroup = true;
        for (i = 1; i < sz; i++) {
            if (a[s[i] - 'a'] != 0 && s[i-1] != s[i]) {isGroup = false; break;}
            else {a[s[i] - 'a']++;}
        }
        if (isGroup) c++;
    }
    cout << c << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}