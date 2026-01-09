#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a uppercase letter: ");
    scanf("%c", &ch);
    printf("Lowercase letter: %c", ch + 32);
}