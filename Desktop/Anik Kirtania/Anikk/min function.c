#include<stdio.h>
int min(int a,int b)
{
if(a>b)
return b;
}
int main()
{
int x,y,min1;
printf("Enter two numbers:");
scanf("%d%d",&x,&y);
min1=min(x,y);
printf("The min value is=%d",min(x,y));
}
