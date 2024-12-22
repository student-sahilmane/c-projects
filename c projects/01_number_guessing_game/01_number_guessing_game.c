#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random, guess;
    int no_of_guesses = 0;

    srand(time(NULL));

    printf("welcome to the world of guessing numbers.\n");
    random = rand() % 100 + 1 ; //genrating between 0 to 100

    do{
        printf("please enter your guess between 1 to 100:\n");
        scanf("%d",&guess);
        no_of_guesses++;

        if(guess < random) {
            printf("guess larger number.\n");
        } else if(guess > random) {
            printf("guess the smaller number.\n");
        } else {
        printf(" congratulations !!!you have successfully guessed the numbers in %d attempts.\n",no_of_guesses);
    }
} while (guess != random);


printf("Bye Bye, thanks for playing.\n");
printf("developed by : sahil mane.\n");

}

