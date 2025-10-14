/*  */
#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    int low = 0, high = n-1, mid, index = -1;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] == key) {
            index = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("%d\n", index);
    return 0;
}
