#include <stdio.h>
int main ()
{
    int isprime(int num)
    {
        if(num<=1)
        {
            return 0;
        }
        for(int i = 2;i*i<n;i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    int main ()
    {
        int N;
        scanf("%d",&N);
        int arr[N];
        for(int i = 0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        int isprimecount = 0;
        for(int i = 0;i<N;i++)
        {
            if(isprime(arr[i]))
            {
                isprimecount++;
            }
        }
    }
        printf("%d",isprimecount);
    
}