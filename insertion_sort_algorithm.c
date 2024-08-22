#include <stdio.h>
#include <stdlib.h>

void intswap(int *a,int *b);
//Insertion sort algorithm
int main()//Method- Container
{
  //Interger Array size of 8
    int array[8]={5,3,7,8,9,10,25,28};
    //Insertion sort algorithm
  //Outer loop is to run through each element of the array
    for(int i=1;i<sizeof(array)/sizeof(array[0]);i++){
      /*Inner loop is to check if the element of i is less than element of j which is previous value of i
      if so then swap the elements. Keep doing so until it is more than j*/
        for(int j=i-1;j>=0&&array[j+1]<array[j];j--){
            intswap(&array[j],&array[j+1]);
        }
    }
  /*{1,5,3,8,2}
  1.When i=1 j=0 5 is more than 1 so leave it as it is
  2.When i=2 j=1 3 is less than 5 so swap the interger {1,3,5,8,2}
  3.When i=3 j=2  8 is more than 5 so leave it as it is {1,3,5,8,2}
  4. When i=4 j=3 2 is is less than 8 so swap the interger {1,3,5,2,8}
  5. Since j-- i=3 j=2 2 is is less than 5 so swap the interger {1,3,2,5,8}
  6. Since j-- i=2 j=1 2 is is less than 3 so swap the interger {1,2,3,5,8}
  7.DONE
  */

  //Print the sorted array.
    for(int h=0;h<sizeof(array)/sizeof(array[0]);h++){
        printf("%d ",array[h]);
    }

}

//Swap between 2 values
void intswap(int *a, int *b){
  //Temporary value to store previous value of a before it's changed.
    int temp=*a;
    *a=*b;
    *b=temp;
}



