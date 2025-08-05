#include <stdio.h>
#include <math.h>
#define maxIteration 100
#define TOL 1e-5

int main(){

//define the matrix A and the vector b involved in the system using arrays
float coeffMatrix[2][2] = {{2,-1},{3,2}};
float bVector[2] = {1,3};

//declare x, xNew, y, yNew
float x, xNew, y, yNew;

//initialise x, y to some arbitrary values
x = 0;
y = 0;

//run an iterative loop(that is terminated on checking convergence criteria)
int iteration = 0;
while(iteration < maxIteration){

xNew = (1+y)/2;
yNew = (3-3*xNew)/2;

printf("%d\t\t%.6lf\t%.6lf\n", iteration, xNew, yNew);

//convergence check
if (fabs(xNew - x) < TOL && fabs(yNew - y) < TOL) {break;}

x = xNew;
y = yNew;

iteration++;
}

}
