#include<stdio.h>
int main()
{
int mark;
scanf("%d",&mark);
if(mark<=100 && mark>= 90)
printf("GRADE A");
else if (mark<=90 && mark>= 70)
printf("GRADE B");
else if(mark<=70 && mark>= 50)
printf("GRADE C");
else if (mark<50 && mark>=0)
printf("GRADE D");
else 
printf("enter a valid input");
}

 
