#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int i, c = 0;
    for (i = 0; i < n; i++){
        if (s[i] == 'c') {
            if (i+1 < n && (s[i+1] == '=' || s[i+1] == '-')) i++;
        }
        else if (s[i] == 'l' || s[i] == 'n') {
            if (i+1 < n && s[i+1] == 'j') i++;
        }
        else if (s[i] == 's' || s[i] == 'z') {
            if (i+1 < n && s[i+1] == '=') i++;
        }
        else if (s[i] == 'd') {
            if (i+1 < n && s[i+1] == '-') i++;
            else if (i+2 < n && s[i+1] == 'z' && s[i+2] == '=') i+=2;
        }
        c++;
    }
    cout << c << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}