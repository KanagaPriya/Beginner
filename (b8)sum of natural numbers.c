#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i=0;
clrscr();
printf("\n enter the value of n");;
scanf("%d",&n);
while(n>0)
{
i++;
sum+=i;
n--;
}
printf("\n sum of the n number is %d",sum);
getch();
}
