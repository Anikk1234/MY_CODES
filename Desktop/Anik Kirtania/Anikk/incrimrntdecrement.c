#include<stdio.h>
int main()
{
int a,b=10;
a=(--b+b++)+--b;
printf("%d    %d\t",a,b);
return 0;
}
