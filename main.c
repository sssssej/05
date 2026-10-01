#include <stdio.h>

int main(void)
{
    int answer = 59;
    int guess;
    int tries = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &guess);

        tries++;

        if (guess > answer)
            printf("High!\n");
        else if (guess < answer)
            printf("Low!\n");
        else
            printf("Congratulations! Trials: %d\n", tries);

    } while (guess != answer);

    return 0;
}