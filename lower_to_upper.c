#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);
    printf("Uppercase letter: %c", ch - 32);
}