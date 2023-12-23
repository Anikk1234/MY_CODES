#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,J,N,K=51,LA[101],ITEM=106;
N=100;
J=N;
for(i=0;i<100;i++)
LA[i]=rand()%1000;
while(J>=K)
{
LA[J+1]=LA[J];
J=J-1;
}
LA[K]=ITEM;
N=N+1;
printf("ITEM %d inserted at position %d \n",LA[K],K);
}
