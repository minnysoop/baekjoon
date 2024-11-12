#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int alph[] = {
        3, 3, 3, 4, 4, 4, 5, 5, 
        5, 6, 6, 6, 7, 7, 7, 8, 
        8, 8, 8, 9, 9, 9, 10, 10, 
        10, 10 
    };
    string s; cin >> s;
    int dt = 0;
    int i, n = s.length();
    for (i = 0; i < n; i++) {
        int c = alph[(int) s[i] - 'A'];
        dt += c;
    }
    cout << dt << "\n";

}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}