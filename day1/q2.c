#include <stdio.h>

int main() {
    int x, y;
    
    printf("alright, gimme two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
           x + y, x - y, x * y, x / y);
    
    return 0;
}
