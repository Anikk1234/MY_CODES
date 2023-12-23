#include<stdio.h>
void main()
{
int i=0,j=0;
do{
if(i%5==0)
{j++;
printf("%d",j);
}
++i;
}
while(i<20);
}
