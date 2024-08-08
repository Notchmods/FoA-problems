#include<stdio.h>
int fibonacci(int);
int main(int argc, char *argv[]){
    for(int i=3;i<37;i++){
       printf("After %d days, %d spores\n",i,fibonacci(i)); 
    } 
}

int fibonacci(int x){
    //Base case
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
    
}
