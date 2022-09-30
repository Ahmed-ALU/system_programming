#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(){
    int randN;
    int NofG = 10;
    int input;

    // Generate the randome number
    // The seed
    srand(time(NULL));
    randN = rand();

    for (int i =0;i<10;i++){
        printf("Please guessa a number, you have %d attempts left:\n", NofG);
        scanf("%d", &input);
        // Condition
        if (input == randN){
            printf("Congratulations, you have made it with only %d guesses\n", 10 -NofG);
            break;
        } 
        else if (input <0){
            puts("You must enter a positive number, your number is negative");
        } 
        else if (input > randN){
            puts("You guess is greater than the number\n");
        }
        else if (input < randN){
            puts("You guess is smaller than the number\n");
        }
        NofG -= 1;
    }

    if (NofG == 0){
        puts("You lost");
        printf("The guess was %d", randN);
    } 
}