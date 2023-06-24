#include<stdio.h>
#include<conio.h>

void main()

{
   clrscr();
   int c,formula;

   printf("Enter Celsius = ");
   scanf("%d",&c);

   formula=(c*9/5)+32;
   printf("Ans. Fahrenheit = %d",formula);
   getch();


}