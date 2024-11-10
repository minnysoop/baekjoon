#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int y;
    cin >> y;
    if (y%4==0 && y%100!=0) printf("1\n");
    else if (y%400==0) printf("1\n");
    else printf("0\n");
}