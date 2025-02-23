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





