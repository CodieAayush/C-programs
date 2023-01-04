#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  printf("Enter a number \n");
  scanf("%d",&a);
  if((a%2)==0)
    printf("You have entered an even number");
  else 
    printf("You have entered an odd number");
}
