#include<stdio.h>
void main()
{
int a,b=0,c[10]={1,2,4,6,9,13,12,5,7,3};
for(a=0;a<10;a++)
{
if(c[a]%2==0)
b+=c[a];
}
printf("%d",b);
}

