/* Q41: Write a program to swap the first and last digit of a number. */
#include <stdio.h>

int main() {
    int n, temp, first, last, pow = 1;
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    first = temp;
    int mid = n % pow;
    mid = mid / 10;
    int swapped = last * pow + mid * 10 + first;
    printf("%d\n", swapped);
    return 0;
}
