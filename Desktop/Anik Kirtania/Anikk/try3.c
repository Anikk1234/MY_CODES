#include<stdio.h>
int main()
{
int n;
printf("Enter the number=");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
for (int j=1;j<=i;j++)
{
if (j%2==0)
printf("0");
else if(j%2!=0)
printf("1");
}
printf("\n");
}
return 0;
}
