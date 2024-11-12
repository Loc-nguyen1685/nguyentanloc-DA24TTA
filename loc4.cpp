#include<stdio.h>
 int main(){
 	int num1, num2;
 	 
 	 printf("nhap so nguyen thu nhat: ");
 	 scanf("%d",&num1);
 	 printf("nhap so nguyen thu hai: ");
 	 scanf("%d",&num2);
 	 
 	 if(num1 < num2){
 	 	printf("so nho ho la %d", num1);
 	 }else{
 	 	printf("so nho hon la %d", num2);
 	 }
 }
