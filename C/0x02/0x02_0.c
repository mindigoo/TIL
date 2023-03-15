//10871번. X보다 작은 수
#include<stdio.h>

int main()
{
    int N,X;
    int A[10000];

    scanf("%d %d", &N, &X);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0; i<N; i++)
    {
        if(A[i] < X)
        {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
    return 0;
}