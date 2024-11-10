#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if (d1 == d2 && d1 == d3) printf("%d\n", 10000 + d1*1000);
    else if (d1 == d2 || d1 == d3) printf("%d\n", 1000 + d1*100);
    else if (d2 == d3) printf("%d\n", 1000 + d2*100);
    else if (d1 > d2 && d1 > d3) printf("%d\n", d1*100);
    else if (d2 > d1 && d2 > d3) printf("%d\n", d2*100);
    else if (d3 > d1 && d3 > d2) printf("%d\n", d3*100);
}