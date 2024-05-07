#include<stdio.h>
#include<conio.h>
void main()
{
  int i, *P[5], a;
clrscr();
for(i=0; i<5; i++)
{
printf("\n enter a no.");
scanf("%d", P[i]);
P[i]=&a;
}
for (i=0;i<5;i++)
{
printf("/n %d", *P[i]);
}
getch();
}
