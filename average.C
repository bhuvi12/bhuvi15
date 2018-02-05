#include<stdio.h>
void main()
{
int n,i,a,sum=0,c=0;
printf("\n enter the number of values");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n enter the %d  value",i);
scanf("%d",&a);
sum=sum+a;
}
c=sum/n;
printf("\n result is",c);
}
