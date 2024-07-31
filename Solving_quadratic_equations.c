#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc,char *argv[]){
    float a,b,c,d;
    float quad_equation,neg_quad_equation;
    a=0;
    b=0;
    //Ask for input
    printf("Enter a b c: ");
    scanf("%f %f %f",&a,&b,&c);
    
    //Quadratic equation in action
    d=pow(b,2)-(4*a*c);
    
    //Check if the equations has real roots or not
    if(a==0&&b==0&&c==0){
        //0 0 0 case
        printf("Equation %.1fx^2 + %.1fx + %.1f = 0 has\n    an infinite number of roots\n",a,b,c);
    }else if (b==0){
        //No b case
        quad_equation= pow(c,1/2);
        neg_quad_equation=-pow(c,1/2);
         printf("Equation %.1fx^2 + %.1fx + %.1lf = 0 has\n    two real roots: x1 = %.1f, x2 = %.1f\n",a,b,c,quad_equation,neg_quad_equation);
    }
    else if(d<0){
        //No roots
        printf("Equation %.1fx^2 + %.1fx + %.1f = 0 has\n    no real roots\n",a,b,c);
    } else if(d==0){
        //One real root
        quad_equation=-b/(2*a);
        printf("Equation %.1fx^2 + %.1fx + %.1lf = 0 has\n    one real root: x = %.1f\n",a,b,c,quad_equation);
    }else if(d>0){
        quad_equation=(-b+pow(d,1/2))/2*a;
        neg_quad_equation=(-b-pow(d,1/2))/2*a;
        printf("Equation %.1fx^2 + %.1fx + %.1f = 0 has\n    two real roots: x1 = %.1f, x2 = %.1f\n",a,b,c,quad_equation, neg_quad_equation);
    }else{
        printf("Equation %.1fx^2 + %.1fx + %.1f = 0 has\n    an infinite number of roots\n",a,b,c);
    }


    return 0;
}
