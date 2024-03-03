#include<stdio.h>
main()
{
int i,n,m,count=0;
printf("enter the number of students\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("enter the marks");
 scanf("%d",&m);
 if(m>15)
 {
 count=count+1;
 }
 }
 printf("no of students with more than 15 marks=%d",count);
 }
