#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int arr[n];
    int i;
    for (i = 0; i < n; i++) arr[i] = i+1;

    while (m--) {
        int i, j;
        cin >> i >> j;

        i -= 1; j -= 1;
        while (i < j) {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
            i++;
            j--;
        }
    }

    int l;
    for (l = 0; l < n; l++) cout << arr[l] << " ";
    cout << "\n";
 }

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}