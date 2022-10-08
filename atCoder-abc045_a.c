#include <stdio.h>

int main()
{
    int a,b,h;
    scanf("%d %d %d",&a,&b,&h);

    int trapezoid = (a+b) / 2 * h;

    printf("%d\n",trapezoid);

    return 0;
}