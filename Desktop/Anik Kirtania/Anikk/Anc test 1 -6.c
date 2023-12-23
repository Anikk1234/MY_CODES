#include<stdio.h>
int main(void)
{
    int a=20,b=10,c,d;
    c=++a-b;
    d=b++ +a;
    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
    printf("\n%d",a%b);
    printf("\n%d",(c<d)?c:d);
    printf("\n%f",(float)(a/b));

}
