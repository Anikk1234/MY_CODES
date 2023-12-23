#include<stdio.h>
int main()
{
int n,digits=0;
printf("Enter a non negatine number=");
scanf("%d",&n);
do{
n=n/10;
digits++;
}
while(n>0);
printf("The number has %d digits",digits);
return 0;
}
