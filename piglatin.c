6)  TO INPUT A STRING CONTAINING ENGLISH SENTENCE AND CONVERT IT INTO PIGLATIN FORM.




#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void convertToPigLatin(char str[]) {
    char pigLatin[1000];
    char word[100];
    int i, j, k;
    int wordStart = -1;
    int length = strlen(str);
  for (i = 0, j = 0; i <= length; i++) {
        if (isalpha(str[i])) {
            if (wordStart == -1) {
                wordStart = i;
            }
        } else {
            if (wordStart != -1) {
            for (k = 0; k < i - wordStart; k++) {
                    word[k] = tolower(str[wordStart + k]);
                }
                word[k] = '\0';
                if (isVowel(word[0])) {
                    strcat(word, "way");
                } else {
                    char first = word[0];
                    for (int l = 0; l < strlen(word) - 1; l++) {
                        word[l] = word[l + 1];
                    }
                    word[strlen(word) - 1] = first;
                    strcat(word, "ay");
                }
                    if (j != 0) {
                    strcat(pigLatin, " ");
                }
                strcat(pigLatin, word);
                wordStart = -1;
            j += strlen(word);
        }
    }
}
printf("Pig Latin form: %s\n", pigLatin);
}
int main() {
char str[1000];
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
if (str[strlen(str) - 1] == '\n')
    str[strlen(str) - 1] = '\0';
convertToPigLatin(str);
return 0;
}
