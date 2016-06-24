#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum;
clrscr();
printf("enter the digit to be counted");
scanf("%d",&n);
count=0;
while(n!=0)
{
n=n/10;
count++;
}
printf("the count of a number %d is %d",n,count);
getch();
}
