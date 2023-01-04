#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter a year");
scanf("%d",&a);
if(a%400==0||(a%100!=0&&a%4==0))
printf("Entered year is leap year");
else
printf("Entered year i not a leap year");
getch();
}
