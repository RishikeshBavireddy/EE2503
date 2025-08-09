//include necessary libraries
#include <stdio.h>

//function to print matrix
void print_matrix(int m, int n, double matrix[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
    printf("%lf ",matrix[i][j]);
}
printf("\n");
}
}


//function to take transpose matrix
void transpose(int m, int n, double matrix[m][n], double matrix_transpose[n][m]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matrix_transpose[j][i] = matrix[i][j];
        }

    }

}


int main(void){
//take user input of m and n
int m, n;
scanf("%d %d", &m, &n);

//declare a matrix of size m*n(should try with pointer approach later)
double matrix[m][n];

//take user input for entries of matrix
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        scanf("%lf", &matrix[i][j]);

    }
}


//declare a matrix to store the transpose
double matrix_transpose[n][m];

//pass the matrix to the functions
printf("ORIGINAL MATRIX\n");
print_matrix(m,n,matrix);
transpose(m,n,matrix,matrix_transpose);
printf("TRANSPOSED MATRIX\n");
print_matrix(n,m,matrix_transpose);


}
