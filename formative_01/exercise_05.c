#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int countUpper(char sent[], int len);
int countLower(char sent[], int len);
int countSpecial(char sent[], int len);

int main(){
    char sentence[20];
    int sumU=0;
    int sumL=0;
    int sumS=0;
    int length;

    // input
    puts("Please enter a sentence:");
    gets(sentence);
    printf("The sentence you have entered is : %s\n", sentence);

    // length of the array to loop on
    length = sizeof(sentence)/sizeof(sentence[0]);

    // call the functions on the string and the lngth
    sumU += countUpper(sentence, length);
    sumL += countLower(sentence, length);
    sumS += countSpecial(sentence, length);

    printf("The sum of upper cases is %d, \nlowercasses is %d\n speials is :%d", sumU, sumL, sumS);
    return 0;
}


int countUpper(char sent[], int len){
    int count =0;
    for (int i=0;i<len;i++){
        if(isupper(sent[i])){
            count+=1;
        }
    }
    return count;
}
int countLower(char sent[], int len){
    int count =0;
    for (int i=0;i<len;i++){
        if(islower(sent[i])){
            count+=1;
        }
    }
    return count;
}
int countSpecial(char sent[], int len){
    //unfortuantly in this one, the empty bytes of the string 
    //is considered as a space thus a special characters, so it 
    //will be counted with them
    int count =0;
    for (int i=0;i<len;i++){
        if(!isalpha(sent[i])){
            count+=1;
        }
    }
    return count;
}
