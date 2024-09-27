#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
//Hold the points of x and y coordinates
 double x[100],y[100];
 int n;
}poly_t;    

double perimeter(poly_t P) ;
double distance(poly_t P);

int main(int argc, char*argv[]){
    poly_t P;
    P.n=0;
    printf("Enter (3-100) points counter-clockwise:\n");
    //Get the points in double and store it in the same index
    while(scanf("%lf,%lf",&P.x[P.n],&P.y[P.n])==2){
        P.n++;
    }
    printf("Perimeter is %.4lf\n",distance(P));
}

//Calculate the distance
double distance(poly_t P){
    double distances,perimeters=0;
    for(int i=1;i<P.n;i++){
        distances=sqrt(((P.x[i-1]-P.x[i])*(P.x[i-1]-P.x[i]))+
                       ((P.y[i-1]-P.y[i])*(P.y[i-1]-P.y[i])));
        perimeters+=distances;   
    }
   //Calculate the distance from final points to initial point 
    perimeters+=sqrt(((P.x[0]-P.x[P.n-1])*(P.x[0]-P.x[P.n-1]))+
                       ((P.y[0]-P.y[P.n-1])*(P.y[0]-P.y[P.n-1])));
    return perimeters;
}
