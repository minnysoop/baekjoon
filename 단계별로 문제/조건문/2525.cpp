#include <iostream>
#include <string>

typedef long long int lli;

using namespace std;

int main(void) {
    int h, m, t;
    cin >> h >> m >> t;

    if (t + m < 60) printf("%d %d\n", h, t+m);
    else if (t + m >= 60) {
        // 전채 분을 따로 분석하고, 시를 조절를 한다. 얘를 들으며, 23:15은 23:00 에서 15+오븐분을 더하면 시간은 어떡해됄까?
        int n = t + m;
        int h1 = h + n/60;
        int m1 = n - 60*(n/60);
        if (h1 > 23) h1 -= 24;
        printf("%d %d\n", h1, m1);
    }
}