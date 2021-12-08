#include<stdio.h>
#include<math.h>
int main(){
        // void sqrt(double x){
        //     double y;

        //     scanf("%lf",y);
        //         while(abs(y*y-x)<=0.01)
        //             y=y/2+x/(2*y);
        //             printf("the square root of x=%.3f",y);

        // }
    double a,b,c,del;
    double a,b,c,del;
    printf("Solve the equation ax^2+bx=c=0\n");
    printf("Input a:");
    scanf("%lf",&a);
    printf("Input b:");
    scanf("%lf",&b);
    printf("Input c:");
    scanf("%lf",&c);
    
    del=b*b-4.0*a*c;

        if(del>0){
            printf("The equation has two solutions\n");
            printf("x1=%.3f\tx2=%.3f ",(-b-sqrt(del))/(2.0*a),(-b-sqrt(del))/(2.0*a));
        }
        else if(del==0){
            printf("THe equation has only a solutions\n");
            printf("x=%.3f",-b/(2.0*a));
        }
        else 
            printf("No solutions");
}