#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int min_diff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];
    for(int i = 0;i<N-1;i++)
    {
        for(int j = i+1;j<N;j++)
        {
            int diff = abs(arr[i] - arr[j]);
            if (diff < min_diff) {
                min_diff = diff;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }
    printf("%d",min_diff);
}