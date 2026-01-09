#include<stdio.h>
int main()
{
    int a, b, sum=0;
    printf("Enter starting number: ");
    scanf("%d", &a);
    printf("Enter ending number: ");
    scanf("%d", &b);
    for(int i=a; i<=b; i++){
        if(i<=1){
            continue;
        }

        int c=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                c++;
                break;
            }
        }
        if(c==0){
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum: %d", sum);
}