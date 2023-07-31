#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter The First Integer - ");
  scanf("%d",&a);
  printf("\nEnter The Second Integer - ");
  scanf("%d",&b);

  if(a%b==0)
    printf("\nThe First Integer Is A Multiple Of The Second Integer\n");
  else
    printf("\nThe First Integer Is Not A Multiple Of The Second Integer\n");
}
