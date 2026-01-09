#include<stdio.h>
int main()
{
    int n;
    printf("Enter range: ");
    scanf("%d", &n);
    
    int first = 0, second = 1, fibo = 0, c = 0;
    while(c<n){
        if(c<=1){
            fibo = c;
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
        c++;
    }
}