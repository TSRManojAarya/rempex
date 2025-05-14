#include <stdio.h>
int main()

{int a,b,c;
    printf("enter the two variables :");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swapping of values: a=%d,b=%d",a,b);
    return 0;

}
