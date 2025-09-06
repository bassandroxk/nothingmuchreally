#include <stdio.h>

int main() {
    int first, second;
    
    printf("hey! drop two numbers here: ");
    scanf("%d %d", &first, &second);
    
    printf("Sum = %d\n", first + second);
    
    return 0;
}
