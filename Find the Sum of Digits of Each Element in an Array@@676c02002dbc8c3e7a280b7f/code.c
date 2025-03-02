#include <stdio.h>
int main ()
{
    int N ;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++){
        scanf("%d",&arr[i]);
        for(int i = 0;i<N;i++)
        {
            int num = arr[i];
            int sum = 0;

        
        while(num>=0)
    
    {
        sum +=num%10;
        num/=10;
    }
    printf("%d",sum);
        }
}
}

