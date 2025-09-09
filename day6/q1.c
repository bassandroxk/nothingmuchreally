/* Q11: Write a program to input an integer and check whether it is even or odd using if–else. */
#include <stdio.h>

int main() {
    int num;
    
    printf("drop a number and i'll tell you if it's even or odd: ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    
    return 0;
}
