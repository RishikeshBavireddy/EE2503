#include <stdio.h>
#include <math.h>
//define f(x)
float fx(float x){
    return 1/(sqrt(x+1) + sqrt(x));
}

float bad_fx(float x){
    return (sqrt(x+1) - sqrt(x));
}
int main(void){

float x;
for(int i = -5; i <= 10; i++){
    x = pow(10,i);
    printf("%f %f at %f \n", fx(x), bad_fx(x), x);
}


}
