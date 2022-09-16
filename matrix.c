#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int arr[row] [col];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d %d",&arr[row],&arr[col]);
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; i < col; j++) {
            printf("%d %d\n",arr[i],arr[j]);
        }
    }
    return 0;
}