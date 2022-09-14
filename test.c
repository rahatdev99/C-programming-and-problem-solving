#include <stdio.h>

int main()
{
    
    char ch;
    int num1,num2;
    printf("Input format(0 + 0)");
    scanf("%d %c %d",&num1,&ch,&num2);

    switch (ch)
    {
    case '+':
        printf("SUM of (%d %c %d) = %d\n",num1,ch,num1,num1+num2);
        break;
    case '-':
         printf("Minus of (%d %c %d) = %d\n",num1,ch,num1,num1-num2);
         break;  
    case '/':
         printf("Share of (%d %c %d) = %d\n",num1,ch,num1,num1/num2);
         break;
    case '%':
         printf("Mod of (%d %c %d) = %d\n",num1,ch,num1,num1%num2);
         break;                
    default:
        printf("%c is not opprater!\n");
        break;
    }
    return 0;
}