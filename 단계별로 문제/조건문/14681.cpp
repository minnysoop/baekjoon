#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) printf("1\n");
    else if (x < 0 && y > 0) printf("2\n");
    else if (x > 0 && y < 0) printf("4\n");
    else if (x < 0 && y < 0) printf("3\n");
}