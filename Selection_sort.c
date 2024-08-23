#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void intswap(int *a,int *b);
//Selection sort algorithm
int main()//Method- Container
{
    int array[8]={5,3,7,8,10,9,28,15};
    //Insertion sort
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        int minimum=i;
        for(int j=i+1;j<sizeof(array)/sizeof(array[0]);j++){
            if(array[minimum]>array[j]){
                minimum=j;
            }
            //Swap variables at the end of each j iterations
            int temp=array[i];
            array[i]=array[minimum]; 
            array[minimum]=temp;
            /*Iteration 1: i=0 min=3 {3,5,7,8,10,9,28,15}
              Iteration 2: i=1 min=5 {3,5,7,8,10,9,28,15} 
              Iteration 3->4 same as iteration 2
              Iteration 5: i=4(10) min=9 {3,5,7,8,9,10,28,15}
              Iteration 6:i=5 same thing as iteration 2(Does nothing)
              Iteration 7: i=6 min =15 {3,5,7,8,9,10,15,28}
              Iteration 8: Does nothing as it's the smallest value in the array*/

        }
    }
    
    //Print out the arrays.
    for(int h=0;h<sizeof(array)/sizeof(array[0]);h++){
        printf("%d ",array[h]);
    }
    /*Keep one thing pointed at the current variable (i)
    Go through the other part of the variable after i(j)
    If j is smaller than the minimum then keep it until
    the end of iteration if the minimum does not change
    At the end of the iteration swap index j and the index
    of the minimum number*/

}
