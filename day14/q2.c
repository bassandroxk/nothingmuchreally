/* Q28: Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>

int main() {
    int n, i;
    long long prod = 1;
    printf("enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        prod *= i;
    }

    printf("%lld\n", prod);
    return 0;
}
