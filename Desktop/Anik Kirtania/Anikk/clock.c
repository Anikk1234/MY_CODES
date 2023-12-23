#include<stdio.h>

int main()
{
int h,m,s,i;

printf("Please Enter a time formate in HH:MM:SS\n");
scanf("%d%d%d,",&h,&m,&s);
start:
for(int h;h<24;h++)
{
for(int m;m<60;m++)
{
for(int s;s<60;s++)
{

printf("\n\n\n/t/t/t%d:%d:%d",h,m,s);
if(h<12)
printf("AM");
else
printf("PM");
for(double i=0;i<3619999;i++)
i++;
i--;
}
s=0;
}
m=0;
}
h=0;
goto start;

}
