#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if (N % 2 == 0)
        printf("%d est pair.",N);
    else 
        printf("%d est impair.",N);  
    return 0;
} 