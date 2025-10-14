/* q61 Search for an element in an array using linear search. */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], max, min;
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    max = min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}

