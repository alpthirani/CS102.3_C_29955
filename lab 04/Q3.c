#include <stdio.h>
int main ()
{
   char name [20];
   float bsalary,inc;

   printf("enter your name");
   scanf("%s",&name);
   printf("enter basic salary");
   scanf("%f",&bsalary);

   if(bsalary<5000){
    inc=bsalary*5/100;
    }

   else if(bsalary<10000){
    inc=bsalary*10/100;
    }

   else{
    inc=bsalary*15/100;

    }

   printf("Hi %s Your New salary is %.2f",name,(bsalary+inc));
}
