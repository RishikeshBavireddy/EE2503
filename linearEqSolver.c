//gauss-seidel method for solving a system of self-consistent equations
//include the required libraries, stdio for input-output and stdin for abs
#include <stdio.h>
#include <stdlib.h>

//use macros for defining constants like : TOL(tolerance), MAX_ITER
#define TOL 1e-10
#define MAX_ITER 100
//write a function for the solver

//what inputs does the solver take ? coefficient matrix and constant vector
void solver(double matrix[2][2], double vector[2]){
int iteration = 0;
float x,y,xNew,yNew;
x = 0;
y = 0;

while(iteration < MAX_ITER){
xNew = (vector[0]- matrix[0][1]*y)/matrix[0][0];
yNew = (vector[1] - matrix[1][0]*xNew)/matrix[1][1];

printf("Iteration: %d\t|x: %lf\t|y: %lf\n", iteration, xNew, yNew);

if(abs(((x-xNew) < TOL))&&(abs(y-yNew) < TOL)){break;}

//update x and y with their new values
x = xNew;
y = yNew;
iteration++;
}

}

//use the function in main program for solving the system of equations
int main(void){

//define coefficient matrix and constant vector of the linear system
double matrix[2][2] = {{2,3}, {3,7}};
double vector[2] = {1,9};

solver(matrix, vector);

return 0;
}
