#include <stdio.h>


int binarySearch(int *arr,int key,int low,int hight)
{
    while(low < hight)
    {
        int mid = (low+hight) / 2;

        if(arr[mid] == key) return mid;

        if(arr[mid] < key) low = mid+1;
        else hight = mid-1;
    }
    return -1;
}

void inputAarray(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

int main()
{
    int n,count = 0;
    scanf("%d",&n);

    while(n--) 
    {
        char ch[50];
        scanf("%s",&ch);

        if(ch[0] == '+' || ch[1] == '+' ) count++;
        if(ch[0] == '-' || ch[1] == '-' ) count--;
    }

    printf("%d\n",count);
    int size;
    printf("Size of array: ");
    scanf("%d",&size);

    int arr[n];
    printf("Input array of element: ");
    
    inputAarray(arr,n);

    int key;
    printf("Input serching value: ");
    scanf("%d",&key);

    int indexOfArray = binarySearch(arr,key,0,n-1);

    if(indexOfArray != -1) {
        printf("%d number index!\n",indexOfArray);
    }
    else{
        printf("Not found!\n");
    }

    return 0;
}