#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n[10];
    bool r[42];
    
    int i;
    for (i = 0; i < 10; i++) cin >> n[i];

    int k;
    for (k = 0; k < 42; k++) r[k] = false;

    int j;
    for (j = 0; j < 10; j++) r[n[j]%42] = true;

    int l, res = 0;
    for (l = 0; l < 42; l++) if (r[l]) res++;

    cout << res << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}