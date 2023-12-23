#include<stdio.h>
int main()
{
int disp[2][3];
int i,j,transpose[3][2];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value for disp [%d][%d]:",i,j);
scanf("%d",&disp[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",disp[i][j]);
}
printf("\n");
}
printf("Transpose Matrix is :\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
transpose[j][i]=disp[j][i];
printf("%d",transpose[j][i]);
}
printf("\n");
}
return 0;
}
