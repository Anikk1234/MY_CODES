
#include <stdio.h>

int main(void) {
int T,N,X,M,count;
scanf("%d",&T);
while(T--)
{
    scanf("%d%d",&N,&X);
    M=N*X;
    do {
    M/= 10;
    ++count;
  } while (M != 0);
  if (count==5)
  {printf("YES\n");
  }
  else
  printf("NO\n");

}
}
