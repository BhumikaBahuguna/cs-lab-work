9) REVERSE A STRING 





#include<stdio.h>
#include<stdio.h>
int main()
{
    char s[50],temp;
    int i,j,l=0;
    printf("enter string ");
    fgets(s,50,stdin);
    for(i=0;s[i]!='\0';i++){
        l++;
    }
    l=l-1;
    for(i=0,j=l-1;i<l/2;i++,j--){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("%s",s);
    return 0;
}

