#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("enter number: ");
    scanf("%d", &n);

    if(n <= 1) {
        flag = 1;
    } else {
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
