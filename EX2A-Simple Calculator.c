#include <stdio.h>
#include<conio.h>
void main() {
   int a,b;
   char ch;
   printf("Enter operator");
   scanf("%d",&ch);
   printf("Enter first number");
   scanf("%d",&a);
   printf("Enter second number");
   scanf("%d",&b);
   switch(ch)
   {
       case '+':printf("Addition=%d",(a+b));break;
       case '-':printf("Subtraction=%d",(a-b));break;
       case '*':printf("Product=%d",(a*b));break;
       case '/':printf("Division=%d",(a/b));break;
       default:printf("Wrong Input");
   }
   getch();
}
