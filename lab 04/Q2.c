#include <stdio.h>
int main ()
{
   int no1,no2,no3,max,low;
   printf("Enter Three Numbers :");
   scanf("%d%d%d",&no1,&no2,&no3);

   max=no1;
   if(no2>max)
   max=no2;
   if(no3>max)
   max=no3;

   low=no1;
   if(no2<low)
   low=no2;
   if(no3<low)
   low=no3;

   printf("The largest number is %d\n",max);
   printf("The lowest number is %d",low);
}

