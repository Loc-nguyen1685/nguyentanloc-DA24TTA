#include <stdio.h>
#include <stdbool.h>

#define ROW 100
#define COL 100

void nhapmang(int A[ROW][COL], int n, int m);
void xuatmang(int A[ROW][COL], int n, int m);
int main() 
{
    int n, m;
    int A[ROW][COL];
    
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    
    if (m <= 0 || m > COL || n <= 0 || n > ROW) 
    {
        printf("So dong hoac so cot khong hop le!\n");
        return 1;    
    }

    nhapmang(A, n, m);
    xuatmang(A, n, m);

    return 0;
}

void nhapmang(int A[ROW][COL], int n, int m)
{
    
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {  
            printf("Nhap A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}
void xuatmang(int A[ROW][COL], int n, int m)
{
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) { 
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
