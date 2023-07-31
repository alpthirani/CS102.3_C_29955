#include <stdio.h>
int main ()
{
  int n1,n2,n3;
  printf("Enter first number");
  scanf("%d",&n1);
  printf("Enter second number");
  scanf("%d",&n2);
  printf("Before swapping n1=%d,n2=%d \n",n1,n2);
  n3=n1;
  n1=n2;
  n2=n3;
  printf("After swapping n1=%d,n2=%d \n",n1,n2);
}
