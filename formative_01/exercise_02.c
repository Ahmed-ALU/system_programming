#include<stdio.h>
#include <stdlib.h>
int main()
{
    int number; 
    int temp; 
    int sum =0; 
    int remainder;
    int numOfDigits;

    //The input
    printf("How many digits is your number (0:10) :\n");
    scanf("%d", &numOfDigits);

    if (numOfDigits < 10){
        int number; 
        int temp; 
    } 
    else if (numOfDigits >= 10){
        long long int number; 
        long long int temp; 
        long long int sum =0;
        long int remainder;

    }
    printf("Please enter an integer :\n");
    scanf("%d", &number);

    

    // storing
    temp = number;

    // if it = 0, then the sum == 0
    while (temp != 0)
    {
        // we will use the reminder approach to get each digit in the int
        remainder = temp % 10;
        sum       = sum + remainder;
        temp         = temp / 10;
    }

    printf("The sum of digits %d is as the following: \n%d\n", number, abs(sum));

    return 0;
}