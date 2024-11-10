#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int t; 
    cin >> t;
    int c = 1;
    while (c <= t) {
        int i;
        for (i = 0; i < c; i++) cout << "*";
        cout << "\n";
        c++;
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}