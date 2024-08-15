#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

// Function to check if a number is prime
int is_prime(int value){
  //If the iteration squared<value  then check if the value can be divided by the iteration.
    for(int i=2; i*i<=value;i++){
    if(value%i==0){
      //If divisible by the iteration then it's not a prime number
        return 0;
        }
    }
  //If not then it's a prime number
    return 1;
    }
  

int main(int argc,char *argv[]){
    int num;
    printf("Enter an integer value: ");
    scanf("%d", &num);
    int next_prime =0;
    int original_value=num;
  /*If the next prime number hasn't been founded then the loop will 
    keep going until the next has been found*/
    while(next_prime==0){
    if(is_prime(num)==0){
        
     }
        //If the value is a prime number and is not the original number then stop the loop.
    if(is_prime(num)==1 && num!=original_value){
        next_prime=num;
        break;
      }
      //If the value is not a prime then increase the value until it hits the next prime number
    num++;
    }
  //State the next prime number as it has been founded
    printf("The next prime is     : %d\n",next_prime);

    return 0;
}

