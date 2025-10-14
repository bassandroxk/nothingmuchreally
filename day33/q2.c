/*  */
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n+1], i;
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    int pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = key;

    for(i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
