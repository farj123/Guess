#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number =rand()%100 + 1;//generate a random number between 0 and 100
    // printf("The number is %d\n", number );
//keep using the loop untill the number is guessed
do{
    printf("Guess the number betweeen 1 and 100\n");
    scanf("%d",& guess);
    if(guess > number){
        printf("Lower number please!\n");
    }
    else if(guess<number){
         printf("higher number please!\n");
    }
    else{
        printf("You guessed it in %d attempts\n",nguesses);
    }
    nguesses++;
}while(guess!=number);
    return 0;
}