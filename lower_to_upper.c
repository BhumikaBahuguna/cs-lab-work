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























8) TO INPUT A STRING 'A' AND A STRING 'B' WHERE LENGTH OF STRING 'B' IS LESS THAN LENGTH OF STRING 'A' , CHECK WETHER 'B' IS SUB STRING OF 'A'.



#include <stdio.h>
#include <string.h>
int isSubstring(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);
   for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j])
                break;
        }
        if (j == len_b)
            return 1; // substring found
    }
}
int main() {
    char a[100], b[100];
    printf("Enter string a: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter string b: ");
    fgets(b, sizeof(b), stdin);
    if (a[strlen(a) - 1] == '\n')
        a[strlen(a) - 1] = '\0';
    if (b[strlen(b) - 1] == '\n')
        b[strlen(b) - 1] = '\0';
    if (isSubstring(a, b))
        printf("'%s' is a substring of '%s'\n", b, a);
    else
        printf("'%s' is not a substring of '%s'\n", b, a);
    return 0;
}














10) NUMBER OF TIMES A SUBSTRING APPEARS IN A STRING 




#include <stdio.h>
#include <string.h>

int main() {
    char S[100]; 
    char sub[100];
    int count = 0;
    int stringLen, subLen;
    printf("Enter the main string: ");
    fgets(S, sizeof(S), stdin);
    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);
    stringLen = strlen(S)-1;
    subLen = strlen(sub)-1;
    for(int i = 0; i <= stringLen - subLen; i++) {
        int found = 1;
        for(int j = 0; j < subLen; j++) {
            if(S[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if(found) {
            count++;
        }
    }

    printf("The substring '%s' appears %d times in the string '%s'.\n", sub, count, S);

    return 0;
}





11) ANAGRAM 




#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],s1[50],temp;
    int i,j,f=0;
    printf("input strings:\n");
    fgets(s,50,stdin);
    fgets(s1,50,stdin);
    if(strlen(s)!=strlen(s1))
    {
        printf("not anagram ");
    }
    else{
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>=65&&s[i]<=90){
            s[i]=s[i]+32;
        }
    }
       for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]>=65&&s1[i]<=90){
            s1[i]=s1[i]+32;
        }
    }
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++){
            if(s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            }
        }
       for(i=0;s1[i]!='\0';i++)
    {
        for(j=i+1;s1[j]!='\0';j++){
            if(s1[i]>s1[j]){
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            }
        }
        for(i=0;s[i]!='\0';i++){
            if(s[i]!=s1[i]){
                f=1;
                break;
            }
            }
    }
    if(f==0)
    {
        printf("anagram ");
    }
    else
    {
        printf("not anagram ");
    }
    return 0;
    }







12)REPLACE A CHARACTER BY $



#include<stdio.h>
int main(){
    char str[50],i,x;
    printf("input string:\n");
    fgets(str,50,stdin);
    printf("input character to replace:\n");
    scanf("%c",&x);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]==x) 
    str[i]='$';
    }
    printf("%s",str);
    return 0;
}








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








