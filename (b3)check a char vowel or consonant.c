#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
printf("enter an alphabhet");
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
printf("\n the alphabhet is a vowel");
else
printf("\n the alphabhet is consonant");
getch();
}
