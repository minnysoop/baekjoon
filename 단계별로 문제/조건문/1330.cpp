#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    if (a > b) printf(">\n");
    else if (a < b) printf("<\n");
    else printf("==\n");
}