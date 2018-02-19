#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("\n enter the two numbers...");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n swap numbers are %d %d",a,b);
    return 0;
}
