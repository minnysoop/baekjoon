#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    string m[5];
    int i = 0;
    while (i < 5) {
        getline(cin, m[i]);
        i++;
    }

    string r = "";
    int j;
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            int n = m[j].length();
            if (i >= n) continue;
            r += m[j][i];
        }
    }
    cout << r << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}