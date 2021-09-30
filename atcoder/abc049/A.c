#include <stdio.h>
int main()
{
    char c;
    int lowercase_vowel;

    scanf("%c", &c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

   if (lowercase_vowel)
        printf("vowel\n");
    else
        printf("consonant\n");
    return 0;
}
