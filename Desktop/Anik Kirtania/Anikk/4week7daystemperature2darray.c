#include<stdio.h>
int main()
{
int temp[4][7]={
                 {32,31,30,31,32,33,32},
                 {33,32,34,35,34,36,36},
                 {34,34,36,36,37,38,38},
                 {38,37,36,35,34,33,32},
               };
int i,j,max;
max=temp[0][0];
for(i=0;i<4;i++)
{
for(j=0;j<7;j++)
{
if(temp[i][j]>max)
{
max=temp[i][j];
}
}
}
printf("Maximum temperature of 4 weeks is=%d",max);
return 0;
}
