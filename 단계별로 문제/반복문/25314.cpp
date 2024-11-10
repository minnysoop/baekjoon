#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int c = n/4;
    int i;
    for (i = 0; i < c; i++) {
        cout << "long ";
    }
    cout << "int\n";
}