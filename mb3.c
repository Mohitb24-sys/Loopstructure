#include <stdio.h>

int main() 
{
    int i, num = 2;

    printf("First 10 even numbers:\n");
    for(i = 1; i <= 10; i++) 
{
        printf("%d ", num);
        num += 2;     
}
    return 0;
}
