#include <stdio.h>
#include <stdlib.h>
void readMATRIX(int **A, int **B, int rowA, int columnA, int rowB, int columnB)
{
    printf("Enter Matrix A: \n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Matrix B: \n");
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
}

void writeMATRIX(int **A, int **B, int rowA, int columnA, int rowB, int columnB)
{
    printf("Matrix A is: \n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is: \n");
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

void multiplyMATRIX(int **A, int **B, int **C, int rowA, int columnA, int rowB, int columnB)
{
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < columnA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("The Multiplication Matrix is: \n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int *A, *B, *C, rowA, columnA, rowB, columnB;
    printf("\nEnter number of rows and columns for Matrix A: ");
    scanf("%d%d", &rowA, &columnA);
    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d%d", &rowB, &columnB);
    if (rowB != columnA)
    {
        printf("!Error-Enter Valid row and columns such that rowB==columnA!");
        return 0;
    }
    //Dynamic memory allocation for Matrix A and Matrix B ,Matrix C
    A = (int *)malloc(rowA * sizeof(int));
    for (int i = 0; i < rowA; i++)
    {
        A[i] = (int *)malloc(columnA * sizeof(int));
    }
    B = (int *)malloc(rowB * sizeof(int));
    for (int i = 0; i < rowB; i++)
    {
        B[i] = (int *)malloc(columnB * sizeof(int));
    }
    C = (int *)calloc(rowA, sizeof(int));
    for (int i = 0; i < rowA; i++)
    {
        C[i] = (int *)calloc(columnB, sizeof(int));
    }
    readMATRIX(A, B, rowA, columnA, rowB, columnB);
    writeMATRIX(A, B, rowA, columnA, rowB, columnB);
    multiplyMATRIX(A, B, C, rowA, columnA, rowB, columnB);
}