7) TO INPUT A STRING CONTAINING ALPHABET AND FIND FREQUENCY OF EACH LETTER AND PRINT LETTERS IN INCREASING ORDER OF THEIR FREQUENCIES.



#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
void countFrequency(char str[], int freq[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            freq[index]++;
        }
        i++;
    }
}
void printFrequencies(int freq[]) {
    printf("Letters sorted by their frequencies:\n");
    for (int i = 0; i < 26; i++) {
        int maxFreq = -1;
        int maxIndex = -1;
        for (int j = 0; j < 26; j++) {
            if (freq[j] > maxFreq) {
                maxFreq = freq[j];
                maxIndex = j;
            }
        }
        if (maxFreq > 0) {
            printf("%c : %d\n", 'a' + maxIndex, maxFreq);
            freq[maxIndex] = 0;
        }
    }
}
int main() {
    char str[MAX_SIZE];
    int freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    countFrequency(str, freq);
    printFrequencies(freq);
    return 0;
}
