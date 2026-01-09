#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    int n1=num1, n2=num2;
    while(n2!=0){
        int rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }

    printf("GCD: %d\n", n1);
    
    int lcm = (num1*num2)/n1;
    printf("LCM: %d\n", lcm);
}