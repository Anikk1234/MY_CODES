#include<stdio.h>
void array(int arr[],int size)
{
int temp;

for(int b=0;b<=size-1;b++)
{
for(int k=0;k<=size-2;k++)
{
if(arr[k]>arr[k+1])
{
temp=arr[k];
arr[k]=arr[k+1];
arr[k+1]=temp;
}
}
}
printf("Sorted array is:\n");
for(int b=0;b<=size-1;b++)
{
printf("%d\t",arr[b]);

}
}
int main()
{
int a[100],i,temp,n,j;
printf("Enter the size of array=");
scanf("%d",&n);
printf("Enter %d element",n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("Given array is :");
for(i=0;i<=n-1;i++)
{
printf("%d\t",a[i]);
}
array(a,n);
}
