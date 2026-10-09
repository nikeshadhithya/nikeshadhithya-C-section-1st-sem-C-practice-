#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is greatest among 3 integer");
else if(b>a && b>c)
printf("b is greatest among 3 integer");
else
printf("c is greatest among 3 integer");
}

