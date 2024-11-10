#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n; 
    cin >> n;

    int star = 1;
    int space = n-1;
    while (star <= n) {
        int i, j;
        for (i = 0; i < space; i++) cout << " ";
        for (j = 0; j < star; j++) cout << "*";
        cout << "\n";
        space--;
        star++;
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}