#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("Enter the size of array=");
scanf("%d",&n);
printf("Enter %d element",n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(int b=0;b<=n-1;b++)
{
for(int k=0;k<=n-2;k++)
{
if(a[k]>a[k+1])
{
temp=a[k];
a[k]=a[k+1];
a[k+1]=temp;
}
}
}
for(j=0;j<=n-1;j++)
{
printf("%d\t",a[j]);
}
return 0;
}
