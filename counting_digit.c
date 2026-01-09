#include<stdio.h>
int main()
{
    int num, c=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while(num!=0){
        num = num/10;
        c++;
    }
    printf("Number of digits: %d", c);
}