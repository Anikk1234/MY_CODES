#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50},count=0;
for(int i=0;i<=4;i++)
{
if(a[i]<=30)
{count++;
printf("%d",a[i]);
}
}
printf("%d\n",count);
return 0;
}
