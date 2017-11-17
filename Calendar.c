#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL, "Russian");

int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char week[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int i,date,day,mes,year;
long N=1;


printf("Enter data (DD MM YYYY): ");
scanf("%d%d%d",&day,&mes,&year);

for(i=1800;i<year;i++){
    if ((i%4==0 && i%100!=0) || (i%400==0))
        N+=366;
    else N+=365;
}
for(i=0;i<mes-1; i++){
    N+=month[i];}
if (((year%4==0 && year%100!=0)||(year%400==0)) && mes>2)
    N++;
N+=day;
N%=7;
printf("\nThis is %s ",week[N]);
getch();
}
