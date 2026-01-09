#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num!=0){
        int rem = num%10;
        sum = sum*10 + rem;
        num = num/10;
    }
    printf("Reverse number: %d", sum);
}