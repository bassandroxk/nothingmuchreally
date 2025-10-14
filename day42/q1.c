/*  */
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, vowels = 0, consonants = 0;
    scanf("%[^\n]", str);
    while(str[i] != '\0') {
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}
