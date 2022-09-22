#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,*array,i,sum = 0;

    scanf("%d",&n);

    array = (int*)malloc(n * sizeof(n));

    for(i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }

    for(i = 0; i < n; i++) {
        sum += array[i];
    }

    printf("%d\n",sum);
    
    return 0;
}