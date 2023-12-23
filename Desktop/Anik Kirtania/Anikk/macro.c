#include<stdio.h>
#define SQUARE(n) n*n
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int a=SQUARE(n);
    printf("Square is: %d",a);
    return 0;
}
