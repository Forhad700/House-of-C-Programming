#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    int tmp = num;
    while(tmp!=0){
        int rem = tmp%10;
        sum = sum*10 + rem;
        tmp = tmp/10;
    }
    if(sum==num){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
}