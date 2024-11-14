#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n = 20;
    float total = 0, earned = 0;
    while (n--){
        string s, g;
        float c;
        cin >> s >> c >> g;
        if (g == "P") continue;
        total += c;
        if (g == "F") continue;

        float t;
        if (g[0] == 'A') t = 4.0;
        else if (g[0] == 'B') t = 3.0;
        else if (g[0] == 'C') t = 2.0;
        else if (g[0] == 'D') t = 1.0;
        if (g[1] == '+') t += 0.5;
        t *= c;
        earned += t;
    }
    cout << earned/total << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}