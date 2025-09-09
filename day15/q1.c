/* Q29: Write a program to calculate the factorial of a number. */
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    printf("enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%lld\n", fact);
    return 0;
}
