#include<stdio.h>
int main()
{
    int n;
    printf("Enter number (minimum 3 digits upto max): ");
    scanf("%d", &n);
    
    int tmp = n/10;
    tmp = tmp*10;
    int res = n - tmp;
    printf("Last digit of that number: %d", res);
}