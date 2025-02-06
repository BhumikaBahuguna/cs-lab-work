#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key);
int main(){
int a[50],int n,int key,int res;
cout<<"enter n";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++){
cin>>a[i];
}
res=linearsearch(a,n,key);
if(res==1)
cout<<"found";
else
cout<<"not found";
return 0;
}
int linearsearch(int a[],int n,int key){
int i;
for(i=0;i<n;i++){
if(a[i]==key
break;
return 1;
}
if(i==n)
return 0;
}
}
