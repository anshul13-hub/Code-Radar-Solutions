#include <stdio.h>
int main ()
{
    int N,count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        int foundduplicate = 0;
        for(int j = i+1;j<N;j++){
            if(arr[i]==arr[j]){
                foundduplicate = 1;
                arr[j] = -1;
            }
        }
        if(foundduplicate&&arr[i]!=-1){
            count++;
        }


    }
    printf("%d\n", count);
    


}