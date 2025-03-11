#include <stdio.h>
int main ()
{
    int N ;
    scanf("%d",&N);
    int arr[N];
    for(int i =0 ;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        int num = abs(arr[i]);
        int sum_of_digits=0;
        while(num>0){
            sum_of_digits+=num%10;
            num/=10;
        }
        printf("%d ",sum_of_digits);
    }
}