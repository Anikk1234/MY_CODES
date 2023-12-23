#include<stdio.h>
int sum(int a,int b) //function formation/additional function
{
return a+b;
}
int product(int a,int b)
{
return a*b;
}
int subs(int a,int b,int skk)
{
skk=a-b;
return skk;
}
int div(int a,int b)
{
return a/b;
}

int main()   //main function
{
int x,y,xyz;
printf("Enter 1st number:");
scanf("%d",&x);
printf("Enter 2nd number:");
scanf("%d",&y);
xyz=sum(x,y);//function call
printf("Result is %d",sum(x,y));
return 0;
}
