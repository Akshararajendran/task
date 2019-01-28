#include<stdio.h>
int add(int x,int y)
{
int c;
c=x+y;
return c;
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("%d",add(a,b));
return 0;
}
