#include<stdio.h>
int main()
{
    int n, c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n<=1){
        c++;
    }

    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c>0){
        printf("Not Prime\n");
    }
    else{
        printf("Prime\n");
    }
}