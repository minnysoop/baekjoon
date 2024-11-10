#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int t; 
    cin >> t;
    int c = 1;
    while (t--) {
        int a, b;
        cin >> a >> b;
        printf("Case #%d: %d\n", c, a+b);
        c++;
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}