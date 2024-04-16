#include <stdio.h>

int main() {
    int a, b, c;
    long long d;
    scanf("%d %d %d %lld", &a, &b, &c, &d);
    if (a + b + c == d || a + b - c == d || a + b * c == d ||
        a - b + c == d || a - b - c == d || a - b * c == d ||
        a * b + c == d || a * b - c == d || a * b * c == d ||
        a + c + b == d || a + c - b == d || a + c * b == d ||
        a - c + b == d || a - c - b == d || a - c * b == d ||
        a * c + b == d || a * c - b == d || a * c * b == d ||
        b + c + a == d || b + c - a == d || b + c * a == d ||
        b - c + a == d || b - c - a == d || b - c * a == d ||
        b * c + a == d || b * c - a == d || b * c * a == d ||
        c + a + b == d || c + a - b == d || c + a * b == d ||
        c - a + b == d || c - a - b == d || c - a * b == d ||
        c * a + b == d || c * a - b == d || c * a * b == d)
        printf("YES");
    else
        printf("NO");

    return 0;
}
