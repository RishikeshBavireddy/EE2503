#include<stdio.h>
#include<stdlib.h>
//function to multiply two matrices using pointer arithmetic
void mutliply2(int rows1, int cols1, int cols2, double* matrix1Ptr, double* matrix2Ptr, double* productPtr){
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            for(int k = 0; k < cols1; k++){
                *(productPtr + cols2*i + j)+= (*(matrix1Ptr + cols1*i + k))*(*(matrix2Ptr + cols2*k + j));
            }
        }
    }
}

//function to multiply two matrices using array indexing
void mutliply1(int rows1, int cols1, int cols2, double matrix1[rows1][cols1], double matrix2[cols1][cols2], double product[rows1][cols2]){
for(int i = 0; i < rows1; i++){
    for(int j = 0; j < cols2; j++){
        for(int k = 0; k < cols1; k++){
            product[i][j] += matrix1[i][k]*matrix2[k][j];
        }
    }
}
}

//function to print matrix using array index method
void print_matrix1(int rows, int cols, double matrix[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

//function to print matrix using pointer dereference method
void print_matrix2(int rows, int cols, double* matrixPtr){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%lf ", *(matrixPtr + i*cols + j));
        }
        printf("\n");
    }
}

int main(void){
//user input of m,p and n
int m,p,n;
scanf("%d %d %d", &m, &p, &n);

//declare matrixA and matrixB
double matrixA[m][p];
double matrixB[p][n];

//declare pointers to matrixA and matrixB
double *matrixA_ptr = malloc(m*p*sizeof(double));
double *matrixB_ptr = malloc(n*p*sizeof(double));

//declare matrix to store product
double product[m][n];

//declare pointer to array to store product(for method 2)
double* product_ptr = malloc(m*n*sizeof(double));

//user input of mxp matrixA(array indexing style)
// for(int i = 0; i < m; i++){
//         for(int j = 0; j < p; j++){
//             scanf("%lf", &matrixA[i][j]);
//         }
// }


//user input of pxn matrixB(array indexing style)
// for(int i = 0; i < p; i++){
//     for(int j = 0; j < n; j++){
//         scanf("%lf", &matrixB[i][j]);
//     }
// }
//user input of mxp matrixA(pointer arithmetic approach)
for(int i = 0; i < m; i++){
    for(int j = 0; j < p; j++){
        scanf("%lf", (matrixA_ptr + i*p + j));
    }
}

//user input of pxn matrixB(pointer arithmetic approach)
for(int i = 0; i < p; i++){
    for(int j = 0; j < n; j++){
        scanf("%lf", (matrixB_ptr + i*n + j));
    }
}


print_matrix2(m,p,matrixA_ptr);
print_matrix2(p,n,matrixB_ptr);
mutliply2(m,p,n,matrixA_ptr,matrixB_ptr,product_ptr);
print_matrix2(m,n,product_ptr);

return 0;
}
