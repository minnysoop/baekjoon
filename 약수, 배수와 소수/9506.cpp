#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

void solve() {
    int n;
    while (true){
        cin >> n;
        if (n == -1) break;

        int factors[n/2]; int cursor = 0;
        int i; for (i = 0; i < n/2; i++) factors[i] = 0;
        
        for (i = 1; i < n/2+1; i++){
            if (n%i == 0) { factors[cursor] = i; cursor++; }
        }

        int sum = 0;
        for (i = 0; i < n/2; i++) sum += factors[i];
        if (sum == n) {
            cout << n << " = ";
            i = 0;
            while (factors[i] != 0 && i < n/2){
                if (i+1 >= n/2 || factors[i+1] == 0) {
                    cout << factors[i] << "\n";
                } else {
                    cout << factors[i] << " + ";
                }
                i++;
            }        
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    solve();
}