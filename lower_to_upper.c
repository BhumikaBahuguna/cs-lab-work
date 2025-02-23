1) TO CONVERT A STRING FROM LOWER CASE TO UPPER CASE.




#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char str[100];
    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
      {
        str[i] = toupper(str[i]);
       }
    printf("String in uppercase: %s", str);
    return 0;
}



NOTE: (The <ctype> header file in C defines various functions to classify and transform characters.)












17) REMOVE SPACES FROM A STRING 



#include <stdio.h>

int main() {
    char str[100], noSpaceStr[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string with spaces

    // Remove newline character if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    i = 0; // Reset i to start from the beginning of the string
    // Iterate through the string and copy non-space characters to noSpaceStr
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            noSpaceStr[j++] = str[i];
        }
        i++;
    }
    noSpaceStr[j] = '\0'; // Null-terminate the string without spaces

    printf("String after removing spaces: '%s'\n", noSpaceStr);

    return 0;
}















