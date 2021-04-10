#include <stdio.h>
int main() {
    char c;
    int vowel;
    
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    //defining the vowels
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    //checking the given character is vowel or consonant
    if (vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}