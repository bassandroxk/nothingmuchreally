/* Q23: Write a program to calculate library fine based on late days as follows: */
#include <stdio.h>

int main() {
    int d, fine = 0;
    printf("enter late days: ");
    scanf("%d", &d);

    if(d <= 5 && d > 0) {
        fine = d * 2;
        printf("Fine ₹%d\n", fine);
    } else if(d <= 10) {
        fine = (5 * 2) + ((d - 5) * 4);
        printf("Fine ₹%d\n", fine);
    } else if(d <= 30) {
        fine = (5 * 2) + (5 * 4) + ((d - 10) * 6);
        printf("Fine ₹%d\n", fine);
    } else if(d > 30) {
        printf("Membership Cancelled\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
