/* Q1: Write a program to input two numbers and display their sum. */
#include <stdio.h>

int main() {
    int first, second;
    
    printf("hey! drop two numbers here: ");
    scanf("%d %d", &first, &second);
    
    printf("Sum = %d\n", first + second);
    
    return 0;
}
