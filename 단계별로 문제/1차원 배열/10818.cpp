#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int arr[n];
    int i;
    for (i = 0; i < n; i++) cin >> arr[i];
    
    int j, min = 10e6, max = -10e6;
    for (j = 0; j < n; j++) {
        if (arr[j] > max) max = arr[j];
        if (arr[j] < min) min = arr[j];
    }

    cout << min  << " " << max << "\n";
    
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}