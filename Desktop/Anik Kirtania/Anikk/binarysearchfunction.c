#include<stdio.h>
void binary_search(int a[],int size,int v)
{
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    while(low<=high)
{
    if(a[mid]<v)
   
    low=mid+1;
   
    else if(a[mid]==v)
    {
    printf("Value found in position %d.\n",mid+1);
    break;
    }
    else
    high=mid-1;
    mid=(low+high)/2;
    }
    if(low>high)
    printf("%d is not present in the array.\n",v);
}
int main()
{
    int arr[100],n,low,mid,high,value,i;
    printf("Please enter array size=\n");
    scanf("%d",&n);
    printf("Enter %d element\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array=\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the value you wanted to search=");
    scanf("%d",&value);
    binary_search(arr,n,value);
    return 0;
}
