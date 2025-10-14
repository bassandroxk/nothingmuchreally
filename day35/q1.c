
#include <stdio.h>

int main() {
    int n, i, a[100], max = -9999, second = -9999;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++) if(a[i] > max) max = a[i];
    for(i = 0; i < n; i++) if(a[i] > second && a[i] < max) second = a[i];
    printf("%d", second);
    return 0;
}
