#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int x, n;
    scanf("%d %d", &x, &n);
    int t = 0;
    while (n--) {
        int p, a;
        scanf("%d %d", &p, &a);
        t += p*a;
    }

    if (t == x) printf("Yes\n");
    else printf("No\n");
}