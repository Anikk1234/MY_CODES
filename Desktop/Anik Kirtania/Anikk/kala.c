#include<stdio.h>
int main()
{
int i,n,sum;
sum=0;

printf("Enter any Intiger:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ if(n%i==0)
{ printf("%d\t",i);
sum=sum+i;


}

}
printf("Sum is=%d\n",sum);
return 0;

}

