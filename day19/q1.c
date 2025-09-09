/* Q37: Write a program to find the LCM of two numbers. */

#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int x, y;
    printf("enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d\n", lcm(x, y));
    return 0;
}

