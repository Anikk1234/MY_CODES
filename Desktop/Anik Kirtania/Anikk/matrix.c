#include<stdio.h>
int main()
{                  //0,1,2
float array[5][3]={ {5,6,7},//0
                    {4,5,7},//1
                    {3,5,8},//2
                    {7,8,9},//3
                    {5,6,7},//4
                  };
                  float sum;
                  float avarage;
                  int i,j;
 for(i=2;i<3;i++)
 {
 sum=0;
 for(j=0;j<3;j++)
 {
 sum+=array[i][j];
 }
 printf("%drd student number sum is=%f\n",i+1,sum);
 avarage=sum/3;
 printf("%drd student number average=%f\n",i+1,avarage);
 }
 for(i=0;i<1;i++)
 {
 sum=0;
 for(j=0;j<3;j++)
 {
 sum+=array[i][j];
 }
 printf("1st student sum=%f\n",sum);
 avarage=sum/3;
 printf("1st student avarage number is: %f\n",avarage);
 }
 for(i=1;i<2;i++)
 {
 sum=0;
 for(j=0;j<3;j++)
 {
 sum+=array[i][j];
 }
 printf("2nd student sum=%d\n",sum);
 avarage=sum/3;
 printf("2nd student avarage number is: %f\n",avarage);
 }
 for(i=2;i<3;i++)
 {
 sum=0;
 for(j=0;j<3;j++)
 {
 sum+=array[i][j];
 }
 printf("3rd student sum=%f\n",sum);
 avarage=sum/3;
 printf("3rd student avarage number is: %f\n",avarage);
 }
 for(i=3;i<4;i++)
 {
 sum=0;
 for(j=0;j<3;j++)
 {
 sum+=array[i][j];
 }
 printf("4th student sum=%f\n",sum);
 avarage=sum/3;
 printf("4th student avarage number is: %f\n",avarage);
 }
 for(i=4;i<5;i++)
 {
 sum=0;
 for(j=0;j<3;j++)
 {
 sum+=array[i][j];
 }
 printf("5th student sum=%f\n",sum);
 avarage=sum/3;
 printf("5th student avarage number is: %f\n",avarage);
 }
 return 0;
}
