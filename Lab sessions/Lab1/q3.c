#include <stdio.h>
#include <math.h>

int main(){
    float a = 1;
    float b = pow(10,5);
    float c = -1;

    float root1 = (2*c)/(-b - sqrt(b*b - 4*a*c));
    float root1Bad = (-b + sqrt(b*b - 4*a*c))/2*a;
    float root2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    printf("root1 = %f\t root1Bad = %f\t root2 = %f\n", root1, root1Bad, root2);
}
