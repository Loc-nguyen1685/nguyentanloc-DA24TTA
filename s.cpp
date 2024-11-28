#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define ROW 100
#define COL 100

// H�m nh?p m?ng
void nhapMang(int A[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nh?p A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

// H�m xu?t m?ng
void xuatMang(int A[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

// H�m t�nh t?ng m?ng
int tongMang(int A[ROW][COL], int m, int n) {
    int tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tong += A[i][j];
        }
    }
    return tong;
}

// H�m t�nh t?ng c�c gi� tr? tr�n D�NG k
int tongDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("D�ng kh�ng h?p l?.\n");
        return -1;
    }
    int tong = 0;
    for (int j = 0; j < n; j++) {
        tong += A[k][j];
    }
    return tong;
}

// H�m t�nh t?ng c�c gi� tr? tr�n C?T k
int tongCot(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= n) {
        printf("C?t kh�ng h?p l?.\n");
        return -1;
    }
    int tong = 0;
    for (int i = 0; i < m; i++) {
        tong += A[i][k];
    }
    return tong;
}

// H�m ki?m tra D�NG k c� t?n t?i S? �M hay kh�ng?
bool kiemTraDongAm(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("D�ng kh�ng h?p l?.\n");
        return false;
    }
    for (int j = 0; j < n; j++) {
        if (A[k][j] < 0) {
            return true;
        }
    }
    return false;
}

// H�m ki?m tra c?t k c� t?n t?i S? NGUY�N T? hay kh�ng?
bool kiemTraCotNguyenTo(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= n) {
        printf("C?t kh�ng h?p l?.\n");
        return false;
    }

    for (int i = 0; i < m; i++) {
        int num = A[i][k];
        if (num > 1) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(num); j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                return true;
            }
        }
    }
    return false;
}

// H�m s?p x?p c�c gi� tr? tr�n D�NG k GI?M D?N
void sapXepDongGiamDan(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("D�ng kh�ng h?p l?.\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[k][i] < A[k][j]) {
                int temp = A[k][i];
                A[k][i] = A[k][j];
                A[k][j] = temp;
            }
        }
    }
}

// H�m ki?m tra C?T k c� to�n gi� tr? L? hay kh�ng?
bool kiemTraCotLe(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= n) {
        printf("C?t kh�ng h?p l?.\n");
        return false;
    }
    for (int i = 0; i < m; i++) {
        if (A[i][k] % 2 == 0) {
            return false;
        }
    }
    return true;
}

// H�m ki?m tra m?ng A c� t?n t?i gi� tr? x hay kh�ng
bool kiemTraX(int A[ROW][COL], int m, int n, int x) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == x) {
                return true;
            }
        }
    }
    return false;
}

// H�m t�m x�c d?nh v? tr� c?a gi� tr? x n?m ? d�ng n�o c?t n�o
void timViTriX(int A[ROW][COL], int m, int n, int x) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == x) {
                printf("Gi� tr? %d n?m ? v? tr�: [%d][%d]\n", x, i, j);
                return;
            }
        }
    }
    printf("Kh�ng t�m th?y gi� tr? %d trong m?ng.\n", x);
}

// H�m t�m gi� tr? l?n nh?t tr�n D�NG k
int timMaxDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("D�ng kh�ng h?p l?.\n");
        return -1;
    }
    int max = A[k][0];
    for (int j = 1; j < n; j++) {
        if (A[k][j] > max) {
            max = A[k][j];
        }
    }
    return max;
}

// H�m t�m gi� tr? nh? nh?t tr�n D�NG k
int timMinDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("D�ng kh�ng h?p l?.\n");
        return -1;
    }
    int min = A[k][0];
    for (int j = 1; j < n; j++) {
        if (A[k][j] < min) {
            min = A[k][j];
        }
    }
    return min;
}

// H�m in ra m�n h�nh c�c S? NGUY�N T? tr�n D�NG k
void inNguyenToDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("D�ng kh�ng h?p l?.\n");
        return;
    }
    printf("C�c s? nguy�n t? tr�n d�ng %d l�: ", k);
    for (int j = 0; j < n; j++) {
        int num = A[k][j];
        if (num > 1) {
            bool isPrime = true;
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                printf("%d ", num);
            }
        }
    }
    printf("\n");
}

int main() {
    int m, n;
    int A[ROW][COL];

    printf("Nh?p s? d�ng (m) v� s? c?t (n): ");
    scanf("%d %d", &m, &n);

    if (m > ROW || n > COL) {
        printf("S? d�ng ho?c s? c?t vu?t qu� gi?i h?n.\n");
        return 1;
    }

    nhapMang(A, m, n);
    xuatMang(A, m, n);

    printf("T?ng m?ng: %d\n", tongMang(A, m, n));

    int k;
    printf("Nh?p s? d�ng k d? t�nh t?ng d�ng: ");
    scanf("%d", &k);
    printf("T?ng d�ng %d: %d\n", k, tongDong(A, m, n, k));

    printf("Nh?p s? c?t k d? t�nh t?ng c?t: ");
    scanf("%d", &k);
    printf("T?ng c?t %d: %d\n", k, tongCot(A, m, n, k));

    printf("Nh?p s? d�ng k d? ki?m tra s? �m: ");
    scanf("%d", &k);
    if (kiemTraDongAm(A, m, n, k)) {
        printf("D�ng %d c� s? �m.\n", k);
    } else {
        printf("D�ng %d kh�ng c� s? �m.\n

