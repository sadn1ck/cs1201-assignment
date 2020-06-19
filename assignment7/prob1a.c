#include <stdio.h>
int A[100][100], B[100][100], C[100][100];
void readMATRIX(int rowA, int rowB, int columnA, int columnB)
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
void writeMATRIX(int rowA, int rowB, int columnA, int columnB)
{
    printf("The Matrix A is: \n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("The Matrix B is: \n");
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}
void multiplyMATRIX(int rowA, int columnB, int columnA)
{
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < rowA; ++i)
    {
        for (int j = 0; j < columnB; ++j)
        {
            for (int k = 0; k < columnA; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("The multiplication Matrix C is: \n");
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
    int rowA, rowB, columnA, columnB;
    printf("\nEnter number of rows and columns for Matrix A: ");
    scanf("%d%d", &rowA, &columnA);
    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d%d", &rowB, &columnB);
    if (rowB != columnA)
    {
        printf("!Error-Enter Valid row and columns such that rowB==columnA!");
        return 0;
    }
    readMATRIX(rowA, rowB, columnA, columnB);
    writeMATRIX(rowA, rowB, columnA, columnB);
    multiplyMATRIX(rowA, columnB, columnA);
    return 0;
}