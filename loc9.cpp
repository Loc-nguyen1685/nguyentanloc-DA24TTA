#include<stdio.h>
int main(){
	int n,nhan =1;
	printf("nhap gia tri n (n>=1): ");
	scanf("%d", &n);
	if(n<=0){
	printf("nhap lai gia tri.");
	return 1;	
	}
	for (int i=1; i<= n;i++){
		nhan *=i;
		
	}
	printf("tich 1*2*3+...*%d=%d\n",n,nhan);
    return 0;
}
