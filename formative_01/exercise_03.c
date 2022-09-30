#include<stdio.h>
#include<math.h>

int isPerfect(double x);
int findNearest(double x, int temp);

int main(){
    float number;
    int temp;
    
    // input (float to be good for small numbers)
    printf("Please enter a positive number of your choice:\n");
    scanf("%f", &number);

    // if the perfect square function return 0 we continue
    if (isPerfect(number) == 0){
        printf ("The number %d, that you entered is a perfect square\n");
    }
    // if not, we go to the find nearest square function
    else{
        temp = (int)number;
        int last = findNearest(sqrt(number), (int)sqrt(temp));
        printf("The number you have entered is not square, and the nearest square is %d",last*last);
    }
}

int isPerfect(double x){
    if (x>0){
        // if the double/float square == the int whole of itself ^ 2 then it is a square
       long double wholeSquare = sqrt(x);
       if ((int)wholeSquare * (int)wholeSquare == x){
        return 0;
       }
    }
    
    return 1;
    
}


int findNearest(double x, int temp){

    // Example, if we got 8, the square of 8 is 2.8, 
    // then the decimal is bigger than .5, so the nearst will be the square of 3
    // This solution is based on test cases I made.

    if (x - temp <=.5){
        return floor(x);
    }
    else{
        return ceil(x);
    }
}
