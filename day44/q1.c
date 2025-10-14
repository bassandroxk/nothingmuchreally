/*  */
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, spaces = 0, digits = 0, special = 0;
    scanf("%[^\n]", str);
    while(str[i] != '\0') {
        char c = str[i];
        if(c == ' ') spaces++;
        else if(c >= '0' && c <= '9') digits++;
        else special++;
        i++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}
