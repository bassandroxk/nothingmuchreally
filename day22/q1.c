/* q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");
    return 0;
}
