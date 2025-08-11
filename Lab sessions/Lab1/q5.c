#include <stdio.h>
#include <math.h>

int main(void){

    float out = 0;
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        out += (float)1/i;
        }
    printf("%f\n", out);




}
