#include<stdio.h>
int avrg(int a,int b,int c,int ag)
{
return ag=(a+b+c)/3;
}
int main()
{
int n1,n2,n3,avg,fuc;
printf("Enter 3 numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
fuc=avrg(n1,n2,n3,avg);
printf("Result is =%d",fuc);
return 0;
}
