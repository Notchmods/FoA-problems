#include<stdio.h>
#include<stdlib.h>


int Mergesort(int array[],int length);
int Merge(int left[], int right[],int array[],int array_size);
//Mergesort algorithm implementation
int main(int argc, char*argv[]){
    int numbers[10]={1,3,5,7,8,9,25,20,10,21};
    //Array length
    int array_length=sizeof(numbers)/sizeof(numbers[0]);
    Mergesort(numbers,array_length);
    for(int i=0;i<array_length;i++){
        printf("%d ",numbers[i]);
    }

}

//Merge sort function
int Mergesort(int array[], int length){

    //Base case 
     if(length<=1){
        return 1 ;
     }

    //Create left and right arrays
    int middle= length/2;
    int left_array[middle];
    int right_array[length-middle];
    int i=0,j=0;// i is for left array j is for right array   
    //Split the left and right  array
    for(;i<length;i++){
        if(i<middle){
            left_array[i]=array[i];
        }else{
            right_array[j]=array[i];
            j++;
        }
    }

    //Recursive calls
    //Sort the splitted array
    Mergesort(left_array,middle);
    Mergesort(right_array,length-middle);
   //Merged the splitted array after it has been sorted
    Merge(left_array,right_array,array,length);
}


//Merge the arrays together
int Merge(int left[], int right[],int array[],int array_size){
    //Cache left and right array size in local variables
   int left_size= array_size/2;
   int right_size= array_size-left_size;
   int i =0,l=0,r=0; //Indices:i-original position, l-left, r-right

   //Check condition for merging
   while(l<left_size && r<right_size){
    //Compare value left and right and then merge put it inside of the original array
        if(left[l]<right[r]){
            array[i]=left[l];
            i++;
            l++;
        }else{
           array[i]=right[r];
           i++;
           r++; 
        }
   }

   //While loop for the last remaining number in the array
   while(l<left_size){ 
            array[i]=left[l];
            i++;
            l++;
    }

    while(r<right_size){
            array[i]=right[r];
            i++;
            r++;
    }

   
}


