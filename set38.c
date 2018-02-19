#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("\n enter the two numbers...");
    scanf("%d%d",&a,&b);
  a=a^b;
  b=a^b;
  a=a^b;
    printf("\n swap numbers are %d %d",a,b);
    return 0;
}
