#include<stdio.h>
#include<conio.h>

void main()

{
  int bs,hra=10,da=8,ta=12,gs;
  clrscr();

  printf("Project:- Greenhors (Base Salary + HRA 10%% + DA 8%% + TA 12%% = Gross Salary\n ");

  printf("\nBase Salary = ");
  scanf("%d",&bs);

  hra=bs*hra/100;
  printf("HRA 10%% = %d\n",hra);

  da=bs*da/100;
  printf("DA 8%% = %d\n",da);

  ta=bs*ta/100;
  printf("TA 12%% = %d\n",ta);

  gs=bs+hra+da+ta;
  printf("Gross Salary = %d\n",gs);



  getch();




}