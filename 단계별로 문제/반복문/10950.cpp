#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int t, i = 0;
    scanf("%d", &t);
    while (i < t) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        i++;
    }
}