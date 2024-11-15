#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int power(int base, int exponent){
    int r = 1, i = 0;
    while (i < exponent) {
        r *= base;
        i++;
    }
    return r;
}

void solve() {
    string N;
    int B;
    cin >> N >> B;
    int r = 0;
    int n = N.length(), i = n-1, e = 0; 
    while (i >= 0) {
        int t;
        if (N[i] > '9') {
            t = (int)N[i] - 'A' + 10;
        } else {
            t =(int)N[i] - '0';
        }
        r += t * power(B, e);
        i--;
        e++;
    }
    cout << r << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}