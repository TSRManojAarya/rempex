#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the two variables :");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping of values: a=%d,b=%d",a,b);
    return 0;
}