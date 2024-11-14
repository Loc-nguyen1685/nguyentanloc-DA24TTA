#include<stdio.h>
int main(){
	int n,sum =0;
	printf("nhap gia tri n (n>0): ");
	scanf("%d", &n);
	if(n<0){
	printf("nhap lai gia tri.");
	return 1;	
	}
	for (int i=1; i<= n;i++){
		sum +=i;
		
	}
	printf("tong 1+2+3+...+%d=%d\n",n,sum);
    return 0;
}
