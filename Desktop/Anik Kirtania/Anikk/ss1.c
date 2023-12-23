#include<stdio.h>

int addition(int a, int b) {
    int ret;
   ret = a+b;
    return ret;
}

int main()
{
    int a1, a2, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a1, &a2);
    sum = additian(a1, a2);
    printf("Upon adding %d and %d, we obtain %d\n", a1, a2, sum);
    return 0;
}

