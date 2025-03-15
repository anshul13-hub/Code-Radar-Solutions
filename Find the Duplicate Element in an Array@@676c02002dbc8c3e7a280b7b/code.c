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
    for(int i = 0;i<N;i++)
    {
        int found = 0;
        for(int j = i+1;j<N;j++)
        {
            if(arr[i]==arr[j])
            {
                found = 1;
                arr[j] = -1;
            }
        }
        if(found&&arr[i]!=1)
        {
            count++;
        }

    }
    printf("%d",count);
}

    
}