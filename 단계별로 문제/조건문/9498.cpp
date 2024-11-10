#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int s;
    cin >> s;
    if (s <= 100 && s >= 90) printf("A\n");
    else if (s < 90 && s >= 80) printf("B\n");
    else if (s < 89 && s >= 70) printf("C\n");
    else if (s < 70 && s >= 60) printf("D\n");
    else printf("F\n");
}