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
    int start = 0;end = N-1;
    int ispalindrome=1;
    while(start<end){
        if(arr[start]=arr[end]){
            ispalindrome=0;
            break;

        }
        start++;
        end--;
    }
    if(ispalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
    

}