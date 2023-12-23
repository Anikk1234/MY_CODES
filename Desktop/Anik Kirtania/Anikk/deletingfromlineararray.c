#include<stdio.h>
int main()
{
int a[100],pos,i,size;
printf("Enter the size of an array=");
scanf("%d",&size);
printf("Enter %d element=",size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position=");
scanf("%d",&pos);
if(pos>=size+1)
printf("Delete is not possible");
else
{
for(i=pos-1;i<size-1;i++)
{a[i]=a[i+1];}
printf("New array is=");
for(i=0;i<size-1;i++)
printf("%d\n",a[i]);
}
return 0;
}
