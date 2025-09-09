/* Q22: Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

int main() {
    float cp, sp, p;
    printf("enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if(sp > cp) {
        p = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", p);
    } else if(sp < cp) {
        p = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", p);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
