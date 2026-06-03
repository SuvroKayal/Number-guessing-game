#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int no_of_guesses = 0;
    int guessed;
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Guess the number ");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Enter lower number please\n");
        }
        else if(guessed<randomNumber){
            printf("Enter Higher number please\n");
        }
        else{
            printf("Congratulations you get it!\n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You guessed the no. in %d guesses\n", no_of_guesses);

    return 0;
}