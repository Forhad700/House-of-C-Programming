#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    int tmp = num;
    while(tmp!=0){
        int rem = tmp%10;
        int fact = 1;
        for(int i=1; i<=rem; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        tmp = tmp/10;
    }
    if(sum==num){
        printf("Strong number\n");
    }
    else{
        printf("Not Strong Number\n");
    }
}