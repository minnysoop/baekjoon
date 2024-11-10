#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int arr[n];
    int i;
    for (i = 0; i < n; i++) cin >> arr[i];
    
    int j;
    for (j = 0; j < n; j++) if (arr[j] < x) cout << arr[j] << " ";
    cout << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}