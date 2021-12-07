#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()

{
    srand(time(0));

    int guess;
    int num = (rand() % 10) + 1;
    int n=0;

    do
    {
        printf("Try guessing a number between 1 to 10:\n");
        scanf("%d",&guess);

        n++;


        if(guess>num)

        {
            printf("Sorry! Guess a lower number.\n");
        }

        else if(guess<num)

        {
            printf("Sorry! Guess a higher number.\n");
        }

        else
        {
            printf("Congratulations!! You guessed right.");
        }

    }while(num != guess);

        if(n == 1)
        {
            printf("You are a GENIUS!!");
        }

     printf("\nYou have completed the game in %d guess(s)",n);

}
