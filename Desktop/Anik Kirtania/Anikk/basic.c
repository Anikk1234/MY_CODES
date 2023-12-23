#include<stdio.h>
int fact(int a)
{

  return a*fact(a-1);
}
int main()
{
int n;
printf("Enter any number:\n");
 scanf("%d",&n);

fact(n);
printf("%d factorial is %d",n,fact(n));


}

