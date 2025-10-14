/* q67 Insert an element in an array at a given position. */
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0}, max = 0, digit, res;
    scanf("%lld", &n);
    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            res = i;
        }
    }
    printf("%d\n", res);
    return 0;
}
