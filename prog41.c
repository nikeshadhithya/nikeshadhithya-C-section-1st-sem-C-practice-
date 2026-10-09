#inlcude<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c);
printf("a is smallest ");
else if(b<a && b<c);
printf("b is smallest");
else if(c<a && c<b);
printf("c is smallest");
else 
printf("all are same");
}

