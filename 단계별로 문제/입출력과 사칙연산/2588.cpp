#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int res = a*b;
    int units = b%10;
    b /= 10;
    int tens = b%10;
    b /= 10;
    int hundreds = b%10;
    printf("%d\n%d\n%d\n%d\n", units*a, tens*a, hundreds*a, res);
}