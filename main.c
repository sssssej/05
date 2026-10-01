#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        sum += i;

    printf("The result is %d\n", sum);

    return 0;
}