#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N; //nombre
    int i; //compteur
    double F; //factorielle
    scanf("%d",&N); 
    for(i=1,F=1;i<=N;i++)
    F*=i;
    printf("Le factoriel de %d est : %.0f\n", N,F);
    return 0;
}