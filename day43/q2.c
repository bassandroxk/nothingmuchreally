/*  */
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, len;
    int flag = 1;
    scanf("%[^\n]", str);
    while(str[i] != '\0') i++;
    len = i;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
