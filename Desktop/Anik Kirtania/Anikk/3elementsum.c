#include<stdio.h>
int main()
{
int num[10]={1,2,3,4,5,6,7,8,9,10,11,12,13},x=12,totalpair=0;
for(int i=0;i<=12;i++)
{
for(int j=i+1;j<=12;j++)
{
for(int k=j+1;k<=12;k++)
{
if(num[i]+num[j]+num[k]==x)
{
totalpair++;
printf("(%d,%d,%d)\n",num[i],num[j],num[k]);
}
}
}
}
printf("Total triple:%d",totalpair);
return 0;
}

