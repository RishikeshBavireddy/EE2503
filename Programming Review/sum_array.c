//include necessary libraries
#include <stdio.h>

int main(void){
int n; //elements in array

//user input of n(elements in the array)
scanf("%d", &n);

//declare an array of n floating point numbers
float array[100];

//take user input of array
for(int i = 0; i < n; i++) scanf("%f", &array[i]);
//declare sum and average
float sum, average;
sum = 0;
average = 0;

//compute sum of the numbers, average of numbers
for(int i = 0; i < n; i++){
sum += array[i];
}

average = sum/n;

printf("SUM : %f |\t AVERGAE : %f", sum, average);

return 0;
}
