#include<stdio.h>
#include<conio.h>

void main()

{
  clrscr();
  int a,b;

  printf("Enter a Value A=");
  scanf("%d",&a);

  printf("Enter a Value B=");
  scanf("%d",&b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("Swipping Value A=%d\n",a);
  printf("Swipping Value B=%d",b);

  getch();



}