/* Q33: Write a program to check if a number is an Armstrong number. */
#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, count = 0, pow, i;
    printf("enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        pow = 1;
        for(i = 0; i < count; i++) {
            pow *= digit;
        }
        sum += pow;
        temp /= 10;
    }

    if(sum == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
