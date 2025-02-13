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






