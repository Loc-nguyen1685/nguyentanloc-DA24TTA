#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define ROW 100
#define COL 100

// Hàm nh?p m?ng
void nhapMang(int A[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nh?p A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

// Hàm xu?t m?ng
void xuatMang(int A[ROW][COL], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

// Hàm tính t?ng m?ng
int tongMang(int A[ROW][COL], int m, int n) {
    int tong = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tong += A[i][j];
        }
    }
    return tong;
}

// Hàm tính t?ng các giá tr? trên DÒNG k
int tongDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("Dòng không h?p l?.\n");
        return -1;
    }
    int tong = 0;
    for (int j = 0; j < n; j++) {
        tong += A[k][j];
    }
    return tong;
}

// Hàm tính t?ng các giá tr? trên C?T k
int tongCot(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= n) {
        printf("C?t không h?p l?.\n");
        return -1;
    }
    int tong = 0;
    for (int i = 0; i < m; i++) {
        tong += A[i][k];
    }
    return tong;
}

// Hàm ki?m tra DÒNG k có t?n t?i S? ÂM hay không?
bool kiemTraDongAm(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("Dòng không h?p l?.\n");
        return false;
    }
    for (int j = 0; j < n; j++) {
        if (A[k][j] < 0) {
            return true;
        }
    }
    return false;
}

// Hàm ki?m tra c?t k có t?n t?i S? NGUYÊN T? hay không?
bool kiemTraCotNguyenTo(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= n) {
        printf("C?t không h?p l?.\n");
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

// Hàm s?p x?p các giá tr? trên DÒNG k GI?M D?N
void sapXepDongGiamDan(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("Dòng không h?p l?.\n");
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

// Hàm ki?m tra C?T k có toàn giá tr? L? hay không?
bool kiemTraCotLe(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= n) {
        printf("C?t không h?p l?.\n");
        return false;
    }
    for (int i = 0; i < m; i++) {
        if (A[i][k] % 2 == 0) {
            return false;
        }
    }
    return true;
}

// Hàm ki?m tra m?ng A có t?n t?i giá tr? x hay không
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

// Hàm tìm xác d?nh v? trí c?a giá tr? x n?m ? dòng nào c?t nào
void timViTriX(int A[ROW][COL], int m, int n, int x) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == x) {
                printf("Giá tr? %d n?m ? v? trí: [%d][%d]\n", x, i, j);
                return;
            }
        }
    }
    printf("Không tìm th?y giá tr? %d trong m?ng.\n", x);
}

// Hàm tìm giá tr? l?n nh?t trên DÒNG k
int timMaxDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("Dòng không h?p l?.\n");
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

// Hàm tìm giá tr? nh? nh?t trên DÒNG k
int timMinDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("Dòng không h?p l?.\n");
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

// Hàm in ra màn hình các S? NGUYÊN T? trên DÒNG k
void inNguyenToDong(int A[ROW][COL], int m, int n, int k) {
    if (k < 0 || k >= m) {
        printf("Dòng không h?p l?.\n");
        return;
    }
    printf("Các s? nguyên t? trên dòng %d là: ", k);
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

    printf("Nh?p s? dòng (m) và s? c?t (n): ");
    scanf("%d %d", &m, &n);

    if (m > ROW || n > COL) {
        printf("S? dòng ho?c s? c?t vu?t quá gi?i h?n.\n");
        return 1;
    }

    nhapMang(A, m, n);
    xuatMang(A, m, n);

    printf("T?ng m?ng: %d\n", tongMang(A, m, n));

    int k;
    printf("Nh?p s? dòng k d? tính t?ng dòng: ");
    scanf("%d", &k);
    printf("T?ng dòng %d: %d\n", k, tongDong(A, m, n, k));

    printf("Nh?p s? c?t k d? tính t?ng c?t: ");
    scanf("%d", &k);
    printf("T?ng c?t %d: %d\n", k, tongCot(A, m, n, k));

    printf("Nh?p s? dòng k d? ki?m tra s? âm: ");
    scanf("%d", &k);
    if (kiemTraDongAm(A, m, n, k)) {
        printf("Dòng %d có s? âm.\n", k);
    } else {
        printf("Dòng %d không có s? âm.\n

