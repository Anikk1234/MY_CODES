#include<stdio.h>
int main()
{
int mat[3][3]={
              //0,1,2
               {1,2,3},//0
               {4,5,6},//1
               {7,8,9},//2
              };
int sum1=0,i,j,sum2=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if((i+j)%2==0)
{
sum1=sum1+mat[i][j];
}
if((i+j)%2!=0)
{
sum2=sum2+mat[i][j];
}
}
}
printf("Sum of altranative element:%d,%d",sum1,sum2);
return 0;
}
