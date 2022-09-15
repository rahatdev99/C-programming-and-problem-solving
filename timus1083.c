#include <stdio.h>

int main()
{
    int n,fac = 1;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) {
        if(fac % n != 0) {
            fac = fac * i;
        }
    }
    printf("%d\n",fac);
    return 0;
}