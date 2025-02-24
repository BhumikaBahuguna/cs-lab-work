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



























