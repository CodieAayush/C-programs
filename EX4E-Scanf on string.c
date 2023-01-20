#include<stdio.h>
#include<conio.h>
void main()
{
    char s[20];
    printf("Enter a string: ");
    scanf("%[^\n]s",s);
    printf("Your entered string is: %s",s);
    getch();
}
