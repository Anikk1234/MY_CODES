#include<stdio.h>
void swap(int a,int b)
{
int temp=a;
a=b;
b=temp;
return;
}
int main()
{
int x=2;
int y=9;
swap(x,y);
printf("%d",x);
printf("%d",y);
}
