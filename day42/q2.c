/*  */
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    scanf("%[^\n]", str);
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    printf("%s", str);
    return 0;
}
