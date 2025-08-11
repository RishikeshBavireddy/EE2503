#include <stdio.h>
#include <math.h>

int main(void){

    float x = 0.001;
    float n = pow(10,6);
    float out1 = x*pow(10,6);
    float out2 = 0;
    for(int i = 0; i < n; i++){out2+=x;}
    printf("%f with accumulation and %f by multiplication", out2, out1);

}
