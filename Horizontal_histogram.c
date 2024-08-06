#include<stdio.h>

int main(int arg, char *argv[]){
   int num;
   printf("Enter numbers: ");
   while(scanf("%d",&num)==1){
       printf("%2d |",num);
       for(int i=0;i<num;i++){
           printf("*");
       }
       printf("\n");
   }
   
}
