#include<stdio.h>
int main(){
    int score = 0;
    printf("Welcome to the quiz game!\n");
    printf("Question 1: Best learning plateform?\n");
    printf("A) Akash\nB) physics Wallah\nC) Allen\nD) Byjus\n");
    char answer1 = 'B';
    printf("Your answer: ");
    char userAnswer1;
    scanf(" %c",&userAnswer1);
    if(userAnswer1 == answer1){
        printf("Correct\n");
        score++;
    } else{
        printf("Wrong\n");
    }
    printf("\nYour score: %d out of 5\n",score);
    return 0;

}