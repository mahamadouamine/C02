#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if (N % 2 == 0)
        printf("%d est paire",N);
    else 
        printf("%d est impaire",N);  
    return 0;
} 