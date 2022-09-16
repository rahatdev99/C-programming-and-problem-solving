#include <stdio.h>

int main()
{
    int a,b,h,area;
    scanf("%d %d %d",&a,&b,&h);

    area = (a + b) * h / h;

    printf("%d\n",area);

    return 0;
}