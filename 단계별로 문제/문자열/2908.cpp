#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int convert(string s);
string reverse(string s);

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    string rs1 = reverse(s1);
    string rs2 = reverse(s2);
    if (convert(rs1) > convert(rs2)) cout << rs1 << "\n";
    else cout << rs2 << "\n";
}

string reverse(string s) {
    int n = s.length(), i;
    string ns = "";
    for (i = n-1; i >= 0; i--) ns += s[i];
    return ns;
}

int convert(string s) {
    int n = s.length();
    int b = 1, i, v = 0;
    for (i = n-1; i >= 0; i--) {
        v += (s[i] - '0')*b;
        b *= 10;
    }
    return v;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}