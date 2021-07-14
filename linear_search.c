#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,num,key=1;
printf("enter the value of n:");
scanf("%d",&n);
int a[n];
printf("enter the array elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the no you want to search:");
scanf("%d",&num);
for(i=0;i<n;i++){
if(a[i]==num)
{
 printf("present\n");
 printf("comparison:%d",key);
 break;
}
key++;
}
if(i==n)
{
    printf("not found");
}
}

