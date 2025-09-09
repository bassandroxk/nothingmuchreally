/* Q8: Write a program to find and display the sum of the first n natural numbers. */
#include <stdio.h>

int main() {
    int n;
    
    printf("how many natural numbers should we sum up? ");
    scanf("%d", &n);
    
    int sum = n * (n + 1) / 2;  // quick formula for sum of first n numbers
    
    printf("Sum=%d\n", sum);
    
    return 0;
}
