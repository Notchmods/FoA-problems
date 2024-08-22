#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int value);
int sum_of_prime(int numbers);
int main(int argc, char*arg[]){
int nums;

//Get multiple inputs
 while(scanf("%d",&nums)==1){
//Gather the total prime number in a variable
     int total=sum_of_prime(nums);
//If it's 0 or is not a prime
     if(is_prime(total)==0 ||total==0){
         printf("Sum of primes <= %d is %d, which is not prime\n",nums,total);
     }else if(is_prime(total)==1){
         printf("Sum of primes <= %d is %d, which is prime\n",nums,total);
     }
 } 
}

// Function to check if a number is prime
int is_prime(int value){
    for(int i=2; i*i<=value;i++){
    if(value%i==0){
        return 0;
    }
    }
    return 1;
    }

//Add up the prime numbers
int sum_of_prime(int numbers){
    int added_prime=0;
//Check if the value is prime
    for(int i=2;i<=numbers;i++){
     if(is_prime(i)==1){
//If so then add it
         added_prime+=i;
     }
    }
    return added_prime;
}
