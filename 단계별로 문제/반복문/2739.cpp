#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int f = 1;
    while (f < 10) {
        printf("%d * %d = %d\n", n, f, n*f);
        f++;
    }
}