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