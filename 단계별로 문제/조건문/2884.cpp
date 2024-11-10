#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int h, m;
    cin >> h >> m;

    if (m >= 45) printf("%d %d", h, m-45);
    else {
        if (h == 0) printf("%d %d", 23, m+15);
        else printf("%d %d", h-1, m+15);
    }
}