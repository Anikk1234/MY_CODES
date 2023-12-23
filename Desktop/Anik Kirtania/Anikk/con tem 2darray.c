#include<stdio.h>
int main()
{
int temp[4][12]={
                 {17,18,21,25,30,33,34,34,32,30,25,20},
                 {17,21,26,32,40,44,46,46,43,36,26,20},
                 {7,7,9,11,14,16,19,19,17,13,10,7},
                 {23,23,22,19,16,14,13,14,16,18,20,22},
               };
int i,j,max=temp[0][0],min=temp[0][0];
for(i=0;i<1;i++)
{

for(j=0;j<12;j++)
{
if(max<temp[i][j])
{
max=temp[i][j];
}
if(min>temp[i][j])
{
min=temp[i][j];
}
}
printf("Country  Highest  Lowest\n");
printf("Bahrain     %d     %d\n",max,min);
}
for(i=1;i<2;i++)
{
for(j=0;j<12;j++)
{
if(max<temp[i][j])
{
max=temp[i][j];
}
if(min>temp[i][j])
{
min=temp[i][j];
}
}

printf("Kawuit      %d     %d\n",max,min);
}
for(i=2;i<3;i++)
{
for(j=0;j<12;j++)
{
if(max<temp[i][j])
{
max=temp[i][j];
}
if(min>temp[i][j])
{
min=temp[i][j];
}
}

printf("UK          %d     %d\n",max,min);
}
for(i=3;i<4;i++)
{
for(j=0;j<12;j++)
{
if(max<temp[i][j])
{
max=temp[i][j];
}
if(min>temp[i][j])
{
min=temp[i][j];
}
}

printf("Australia   %d     %d\n",max,min);
}
return 0;
}
