#include <stdio.h>
int main ()
{
    int N,count= 0;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++){
        int num = arr[i],original=num,rev=0,rem;
        while(num>0)
        {
            rem = num %10;
            rev = rev*10+rem;
            num /=10;
        }
        if(original==rev)
        {
            count++;
        }
    }
    printf("%d",count);

}