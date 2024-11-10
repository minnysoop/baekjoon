#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int arr[9];
    int i;
    for (i = 0; i < 9; i++) cin >> arr[i];
    
    int j, max_i, max = -10e6;
    for (j = 0; j < 9; j++) {
        if (arr[j] > max) {
            max = arr[j];
            max_i = j;
        }
    }

    cout << max  << "\n" << max_i + 1 << "\n";
    
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}