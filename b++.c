#include <stdio.h>

int main()
{
    int n,count = 0;
    scanf("%d",&n);

    while(n--) {
        char st[101];
        scanf("%s",&st);

        if(st[0] == '+' || st[1] == '+') count++;
        if(st[0] == '-' || st[1] == '-') count--;
    }
    printf("%d\n",count);
    return 0;
}