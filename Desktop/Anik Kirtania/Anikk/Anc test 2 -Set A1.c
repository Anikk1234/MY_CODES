#include<stdio.h>
void main()
{
char c1,c2;
printf("Input from Player1:");
scanf("%c",&c1);
getchar();
printf("Input from Player2:");
scanf("%c",&c2);
if(c1=='P' && c2=='R')
printf("Player1 Wins\n");
else if(c1=='R' && c2=='S')
printf("Player1 Wins\n");
else if(c1=='S' && c2=='P')
printf("Player1 Wins\n");
else
printf("Player2 wins\n");
return 0;
}
