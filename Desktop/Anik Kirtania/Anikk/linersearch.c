#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5},value,position=-1,i;
printf("Enter the value:");
scanf("%d",&value);
for(i=0;i<=4;i++)
{if(value==a[i])
{position=i+1;
break;
}
}
if(position==-1)
{printf("value is not found");

}
else {printf("This value is present in %d position",position);}
return 0;
}
