#include<stdio.h>
int main()
{
int x[5];
for(int i=1;i<=5;i++)
{
printf("Enter the %d number=",i);
scanf("%d",&x[i]);
}
for(int i=1;i<=5;i++)
{
printf("%d ",x[i]);
}
return 0;
}
