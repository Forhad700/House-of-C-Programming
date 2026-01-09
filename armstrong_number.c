#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    int tmp = num;
    while(tmp!=0){
        int rem = tmp%10;
        sum = sum + rem*rem*rem;
        tmp = tmp/10;
    }
    if(sum==num){
        printf("Armstrong\n");
    }
    else{
        printf("Not Armstrong\n");
    }
}