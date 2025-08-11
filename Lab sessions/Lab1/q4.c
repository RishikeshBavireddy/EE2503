#include <stdio.h>
#include <math.h>
float derf(float h, float x){
    return (sin(x+h) - sin(x))/h;
}

int main(){

    float x;
    x = 0;
    float h = pow(10,-15);
    while(h < 0.6){

        printf("%0.15lf %0.15lf",h,cos(x) - derf(h,0));
        printf("\n");
        h = h + 1e-6;
    }

}
