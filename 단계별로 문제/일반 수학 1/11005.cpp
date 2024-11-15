#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int N, B;
    cin >> N >> B;
    string r = "";
    while (N > 0) {
        int t = N % B;
        if (t <= 9) {
            r = (char)(t + 48) + r;
        } else {
            r = (char)(t + 55) + r;
        }
        N /= B;
    }
    cout << r << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}