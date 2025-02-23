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






16) STRING PALINDROME OR NOT 





#include<stdio.h>
int main()
{
    char str[20],str1[20],temp;
    int i,j,l,f=0;
    printf("enter a string:\n");
    fgets(str,20,stdin);
    for(i=0;str[i]!=0;i++)
    {
        str1[i]=str[i];
    }
    str1[i]='\0';
    for(i=0;str1[i]!=0;i++)
    {
        l=l+1;
    }
    l=l-1;
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str1[i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("palindrome ");
    }
    else
    {
        printf("not palindrome ");
    }
    return 0;
}






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















