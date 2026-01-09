#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i = i+2){
        int spaceCount = (n-i)/2;
        for(int j=1; j<=spaceCount; j++){
            printf(" ");
        }

        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}