#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    float *x;
    float *y;
    float Area=0,x_to_y=0,y_to_x=0;
    x=(float*)malloc(100*sizeof(float));
    y=(float*)malloc(100*sizeof(float));
    int c=0;
    //Gather inputs
    printf("Enter (3-100) points counter-clockwise:\n");
    while(scanf("%f,%f",&x[c],&y[c])==2 ){
        c++;//Itertation counter
    }
    //Gauss shoe lace formula
    for(int i=0;i<c;i++){
        
        if(i<c-1){
        //If it is not at the last trace then execute
        x_to_y+=(x[i]*y[i+1]);
        y_to_x+=(x[i+1]*y[i]);
        }else{
        //If at the last trace then include the starting coordinates into 
         //calculation
            x_to_y+=(x[i]*y[0]);
            y_to_x+=(x[0]*y[i]);
        }

    }

    //Add up the x_to_y to area
    Area=(x_to_y-y_to_x)/2;
    //Make area positive if negative
    
    if(Area<=0){
     Area=Area*(-1);   
    }
    printf("Area is %.4f\n",Area);
    free(x);
    free(y);
}
