/* q53 Write a program to print the following pattern: */
#include <stdio.h>

int main() {
    int i, j, start, n = 5;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        start = n + 1 - i;
        for(j = start; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
