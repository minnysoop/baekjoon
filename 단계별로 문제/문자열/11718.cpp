#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    string s;
    string r = "";
    while( getline( cin, s ) ) {
       r += s;
       r += "\n";
    }
    cout << r << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}