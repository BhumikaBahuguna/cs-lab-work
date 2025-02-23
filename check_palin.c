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
