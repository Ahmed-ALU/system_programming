#include<stdio.h>
#include<ctype.h>

int input();
int generateArray(int upperBound);
int output(int upperBound);

int main(){
    int sumOdd;
    int sumEven;
    int thirdEven;
    int fifthOdd;

    int upBound = input()-1;
    int arr[upBound*4];
    // filling the array
    for(int i=0;i<=upBound;i++){
        arr[i] = i+1;
    }   
    
    // The outputs
    // 1- sum of odd
    for(int i=0;i<=upBound;i+=2){
        sumOdd += arr[i];
    } 
    // 2- sum of even
    for(int i=1;i<=upBound;i+=2){
        sumEven += arr[i];
    } 

    // 3- thirdeven :
    thirdEven = sumEven/3;

    // 4- fifth odd :
    fifthOdd = sumOdd/5;

    printf("The upper bound was: %d\n The sum of evens: %d\n the sum of odds :%d\n The third of the even sum: %d\nThe fifth of the odd sum: %d\n", upBound+1, sumEven, sumOdd, thirdEven, fifthOdd);
    puts("Thank you");

    return 0;

}

int input(){
    // The inputs section:
    int upper_bound = 0;
    while (upper_bound == 0 || upper_bound < 0) {
        puts("Please enter a number that is bigger than 0:");
        scanf("%d",&upper_bound);
        if (upper_bound == 0 || upper_bound < 0){
        puts("You cann't enter 0 or less than 0:\n");
        }
        else if (isalpha(upper_bound)){
            upper_bound = (int)0;
            continue;
            puts("Please enter a number that is bigger than 0 (not a char):");
            scanf("%d",&upper_bound);
        }
    }
    return upper_bound;
}



