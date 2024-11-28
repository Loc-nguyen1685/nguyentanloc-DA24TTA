#include<stdio.h>
#include<stdbool.h>

#define ROW 100
#define COL 100

void nhapmang(int A[][100], int n, int m);  // H�m nh?p m?ng

int main() 
{
    int n, m;
    int A[100][100];
    
    // Nh?p s? d�ng v� s? c?t
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    
    // Ki?m tra s? d�ng v� s? c?t h?p l?
    if (m <= 0 || m > COL || n <= 0 || n > ROW) 
    {
        printf("So dong hoac so cot khong hop le!\n");
        return 1;    
    }

    // G?i h�m nh?p m?ng
    nhapmang(A, n, m);
    
    return 0;
}

// H�m nh?p m?ng A c� n d�ng v� m c?t
void nhapmang(int A[][100], int n, int m)
{
    // Nh?p c�c ph?n t? c?a m?ng
    for (int i = 0; i < n; i++) {  // Duy?t qua t?ng d�ng
        for (int j = 0; j < m; j++) {  // Duy?t qua t?ng c?t
            printf("Nhap A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

