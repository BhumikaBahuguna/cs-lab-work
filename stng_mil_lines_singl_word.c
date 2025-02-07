
4) TO INPUT A STRING CONTAINING MULTIPLE LINES BUT A SINGLE WORD.


#include <stdio.h>
int main() {
    char string[1000]; 
    printf("Enter a string containing multiple lines but a single word:\n");
    fgets(string, sizeof(string), stdin);
    printf("The word you entered is: %s", string);
    return 0;
}
