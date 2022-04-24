#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    srand(time(0));
    int hidden = rand() % 100 + 1;

    int number_of_guess = 0;

    while (number_of_guess <= 10)
    {
        int guess;
        scanf("%d", &guess);

        if (guess == hidden)
        {
            printf("your Are Winner\n");
            break;
        }
        else if (guess > hidden)
        {
            printf("Guess Smaller\n");
        }
        else
        {
            printf("Guess Larger\n");
        }
        number_of_guess++;
    }

    if (number_of_guess == 10)
    {
        printf("You Completly fail");
    }

    return 0;
}