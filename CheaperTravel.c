#include <stdio.h>

int main() {
    int n, m, a, b, total, specialcost, remaining, temp;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    if ((n >= 1 && n <= 1000) && (m >= 1 && m <= 1000) && (a >= 1 && a <= 1000) && (b >= 1 && b <= 1000)) {
        remaining = n / m;
        if (remaining == 0) {
            // If n < m
            if (n * a < b) {
                total = n * a;
            } else {
                total = b;
            }
        } else {
            // If n >= m
            specialcost = remaining * b;
            total = specialcost + (n % m) * a;
            temp = n * a;
            if (temp < total) {
                total = temp;
            }
            // Check if it's cheaper to add one more specialcost instead of remaining tickets
            if (specialcost + b < total) {
                total = specialcost + b;
            }
        }
        printf("%d", total);
    }

    return 0;
}
