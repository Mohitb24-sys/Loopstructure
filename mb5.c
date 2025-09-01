#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers:\n", n);
    for(i = 1; i <= n; i++) 
{
        printf("%d ", 2*i - 1); // formula for odd numbers
}

    return 0;
}
