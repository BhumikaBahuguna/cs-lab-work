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




13)COUNT NO OF ALPHABETS , DIGITS AND SPECIAL CHARACTERS 





#include<stdio.h>
int main(){
    char str[50],i,l=0,n=0,s=0;
    printf("input string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90 ||str[i]>=97&&str[i]<=122)
       l=l+1;
       else if(str[i]>=48&&str[i]<=57)
       n=n+1;
       else
       s=s+1;
    }
    printf("no of letters numbers and special characters are %d %d %d",l,n,s);
    return 0;
}






14) LENGTH OF A STRING 





#include<stdio.h>
int main(){
    char str[50],i,l=0;
    printf("input string:\n");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        l=l+1;
    }
    l=l-1;
    printf("length of the input string is %d",l);
    return 0;
}







15)REPLACE 'a' with $



#include <stdio.h>

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Replace 'a' with '$'
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a') {
            str[i] = '$';
        }
        // Check for newline character and replace it with null terminator
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    // Output the modified string
    printf("Modified string: %s\n", str);
    
    return 0;
}





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






18) CONVERT LOWER CASE TO UPPER CASE AND VICE VERSA 






#include <stdio.h>

void convertCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; // Convert lowercase to uppercase
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32; // Convert uppercase to lowercase
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertCase(str);

    printf("Converted string: %s\n", str);

    return 0;
}








