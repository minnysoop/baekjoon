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
    
    int v;
    cin >> v;

    int j, c = 0;
    for (j = 0; j < n; j++) if (arr[j] == v) c++;

    cout << c << "\n";
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}