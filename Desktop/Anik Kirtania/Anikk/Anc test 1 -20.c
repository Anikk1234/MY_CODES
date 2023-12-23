#include<stdio.h>

int func(int x)
{
if (x>5)
return x;
else
return func(x+2);
}
void main()
{
printf("%d",func(1));
}
