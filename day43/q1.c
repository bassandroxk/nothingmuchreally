/*  */
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, len;
    scanf("%[^\n]", str);
    while(str[i] != '\0') i++;
    len = i;
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
