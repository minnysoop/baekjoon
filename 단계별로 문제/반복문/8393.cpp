#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int n;
    scanf("%d", &n);
    int i, sum = 0;
    for (i = 1; i <= n; i++) sum += i;
    printf("%d\n", sum);
}