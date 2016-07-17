#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the value of n");
scanf("%d",&n);
if(n>0)
{
printf("\n the number is positive");
}
else if(n<0)
{
   printf("the number is negative");
}
else
{
printf("the number is equal to zero");
}
getch();
}
