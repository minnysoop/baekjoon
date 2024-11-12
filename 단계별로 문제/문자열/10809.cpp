#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int alph[26];
    int z;
    for (z = 0; z < 26; z++) alph[z] = -1;
    string s;
    cin >> s;
    int i, n = s.length();
    for (i = 0; i < n; i++) {
        if (alph[s[i] -'a'] == -1) {
            alph[s[i] - 'a'] = i;
        }
    }
    for (i = 0; i < 26; i++) {cout << alph[i] << " ";}
    cout << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}