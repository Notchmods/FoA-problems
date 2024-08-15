#include<stdio.h>
#include<stdlib.h>

//Constants for all the cents
#define FIFTY 50
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define TWO 2
#define ONE 1

//Declare the functions so that it can be called.
void Give_change(int *cents, int coins);
void print_change(int cents);

int main(int argc, char *argv[]){
    int coins=0;
    printf("Enter amount in cents: ");
    scanf("%d",&coins);
    printf("The coins required to make %d cents are:\n",coins);
    print_change(coins);
    printf("amount remaining: 0c\n");
}

//Call the functions to print out the coins 
//Call the function for every type of coins.
void print_change(int cents){
    Give_change(&cents,FIFTY);
    Give_change(&cents,TWENTY);
    Give_change(&cents,TEN);
    Give_change(&cents,FIVE);
    Give_change(&cents,TWO);
    Give_change(&cents,ONE);
}

void Give_change(int *cents, int coins){
  //Count the amount of time the cents deducted(specified in the parameter "coins") will be used up. 
    int used_up=0;

  /*Basically if the cents remaining is more than the cents deducted then it'll keep deducting 
the remaining cents is less than the cents that will be deducted.*/
    while(*cents>=coins){
     *cents-=coins;
     used_up++;
    }

  //If the coins is deducted then the function will run according to how many times it is deducted.
    if(used_up>=1){
        for(int i=0;i<used_up;i++){
          printf("give a %2dc coin\n",coins);
        }  
    }
    
}
