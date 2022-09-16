#include <stdio.h>
#include <math.h>

int main()
{
    long long int n,t,j=0;
    scanf("%d",&t);

    while(t--) 
    {
        scanf("%d",&n);
        long long int sq=ceil(sqrt(n));
        long long int r=sq*sq-n;
        long long int x,y;

        if(r < sq) {
            y = r+1;
            x = sq;
        }
        else{
            x=2*sq-r-1;
            y=sq;
        }
        if( sq & 1) {
            int temp = x;
            x = y;
            y = temp;
            printf("Case %lld: %lld %lld\n",++j,x,y);
        }
    }
    return 0;
}