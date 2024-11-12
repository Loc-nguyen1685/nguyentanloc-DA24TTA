#include<stdio.h>
	char MSSV[20];
	char Hoten[80];
	int Namsinh;
	float Dxt [20];

int main(){
	
	printf("\n nhap ma so sinh vien: ");
	fgets(MSSV, sizeof(MSSV),stdin);
	printf("\n ho ten: ");
	fgets(Hoten, sizeof(Hoten), stdin);
	printf("nam sinh: ");
	scanf("%d", &namsinh);
	printf("nhap diem xet tuyen: ");
	scanf("%f", &Dxt);
	printf("nhap lop");
	fgets(lop, sizeof(lop),stdin);
	
	printf("\n nhap thong tin sinh vien:\n");
	printf("MSSV: %s", MSSV);
	printf("Ho ten: %s",Hoten);
	printf("nam sinh: %d\n",namsinh);
	printf("diem xet tuyen: %.2f", dxt);
	printf("lop: %s", lop);
	
	return o;
}
