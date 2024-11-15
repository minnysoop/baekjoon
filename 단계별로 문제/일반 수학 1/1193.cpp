#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int x; cin >> x;
    int i = 0;
    int n = 0, p = 1;
    while (i < x) {
        if (n == p) {
            n = 1;
            p++;
        } else {
            n++; 
        }
        i++;
    }
    if ((p+1)%2 == 0) cout << p+1 - n << "/" << n << "\n";
    else cout << n << "/" << p+1 - n << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}