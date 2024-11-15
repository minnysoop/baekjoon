#include <iostream>
#include <string>
#include <cmath>

typedef long long int lli;

using namespace std;

void solve() {
    int A, B, V;
    cin >> A >> B >> V;

    int d;
    if (A - B == V) d = 1;
    else d = ceil((V-A)/(double)(A-B)) + 1;
    cout << d << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}