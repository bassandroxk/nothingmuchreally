
#include <stdio.h>

int main() {
    int num;
    
    printf("drop a number and i'll tell you if it's positive, negative, or zero: ");
    scanf("%d", &num);
    
    if(num > 0)
        printf("Positive\n");
    else if(num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    
    return 0;
}
