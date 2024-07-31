#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    float temp,new_temp;
    char units;
    printf("Enter a temperature: ");
    if(scanf("%f%c",&temp,&units)!=2){
    printf("Invalid input\n");
    return 0;
    }
    if(units=='F'){
        new_temp=(temp-32)*5/9;
        printf("The temperature %.1fF converts to %.1fC\n",temp, new_temp);
    }else if(units=='C'){
        new_temp=(temp*9/5)+32;
        printf("The temperature %.1fC converts to %.1fF\n",temp, new_temp);
    }else{
         printf("Invalid units");   
    }

    return 0;
}
