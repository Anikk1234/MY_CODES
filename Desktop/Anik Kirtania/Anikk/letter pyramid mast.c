#include<stdio.h>
int main()
{
int n;
printf("Enter the numbers of row:");
scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
 for(int l=1;l<=n-i;l++)    //spaces
 {
 printf(" ");
 }
 for(int j=1;j<=i;j++)      //number triangle
 {
 printf("%c",j+64);
 }
 int m=i-1;
 for(int k=1;k<=i-1;k++)     //extra pattern
 {
 printf("%c",m+64);
m--;
 }
 printf("\n");
 }
return 0;
}

