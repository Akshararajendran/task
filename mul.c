#include<stdio.h>
int mul(int x,int y)
{
int c;
c=x*y;
return c;
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("%d",mul(a,b));
return 0;
}
