#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    if((n%4==0) && (n%100!=0)){
        printf("Leap Year");
    }
    else if(n%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
}