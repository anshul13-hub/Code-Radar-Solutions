#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<N;i++){
        int N = arr[i];
        int sum_of_digits=0;
        while(N>0){
            sum_of_digits+=N/10
            N/=10;
        }
        printf("%d ",sum_of_digits);
    }
}