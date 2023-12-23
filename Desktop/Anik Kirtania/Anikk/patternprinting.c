#include<stdio.h>
int main()
{ int n,m;
printf("Enter The Value Of Line:");
scanf("%d",&n);
printf("Enter The Value Of Element Of Each Line:");
scanf("%d",&m);
for(int i=1;i<=n;i++)
{
for(int i=1;i<=m;i++)
{
printf("%d\t",i );
}
printf("\n");
}

return 0;
}
