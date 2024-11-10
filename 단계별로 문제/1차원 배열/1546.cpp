#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    cin >> n;

    float s[n];

    int i;
    for (i = 0; i < n; i++) cin >> s[i];
    
    float m = -1001.0;
    for (i = 0; i < n; i++) if (s[i] > m) m = s[i];
    for (i = 0; i < n; i++) s[i] = s[i] / m * 100.0;
    
    float sum = 0.0;
    for (i = 0; i < n; i++) sum += s[i];

    cout << sum/n << "\n";
 }

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}