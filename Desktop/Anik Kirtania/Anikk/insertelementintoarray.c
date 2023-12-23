#include<stdio.h>
int main()
{
int a[100],i,pos,item,size;
printf("Enter the size of a array=");
scanf("%d",&size);
printf("Enter array element:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position of element you want to insert:");
scanf("%d",&pos);
printf("Enter the item you want to insert:");
scanf("%d",&item);
for(i=size;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos]=item;
size++;
printf("New array is=");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
return 0;
}


