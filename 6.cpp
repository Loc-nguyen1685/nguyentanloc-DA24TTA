#include <stdio.h>
#include <stdbool.h>

#define ROW 100
#define COL 100

void nhapmang(int A[ROW][COL], int n, int m);

int main() 
{
    int n, m;
    int A[ROW][COL];
    
    // Input for rows and columns
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    
    // Check if the dimensions are valid
    if (m <= 0 || m > COL || n <= 0 || n > ROW) 
    {
        printf("So dong hoac so cot khong hop le!\n");
        return 1;    
    }

    // Call the function to enter the array values
    nhapmang(A, n, m);
    
    return 0;
}

void nhapmang(int A[ROW][COL], int n, int m)
{
    // Input the elements of the array
    for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j < m; j++) {  // Loop for columns
            printf("Nhap [%d] [%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

