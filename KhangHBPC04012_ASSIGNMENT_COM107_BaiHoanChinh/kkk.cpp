#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void case1(){
	
	char string[20];
	fflush(stdin);
	printf("Nhap vao chuoi ho va ten: \n");
	gets(string);
	printf("chuoi sau khi duoc dao nguoc la:  %s\n", strrev(string) );
}


void input2(){
	int n;
	float tu, mau;
	printf("nhap vao so nguyen duong la: \n");
	scanf("%d", &n);
	for(int i = 2; i<= n; i++){
		
		tu += i;
		
	}
	printf("tu la : %f", tu);
	int i =2;
	while( i< n){
		mau = pow(i,i);
		i++;
		
	//	mau+=pow(i,i);
		
	}
		mau+=pow(i,i);
		
	
		printf("mau la : %f", mau);
	printf("tong la: %f",  1+(tu/mau));
}
void case2(){
	
	
	input2();
}

void input3(int array[],int choice){
	for(int i = 0; i< choice; i++){
		
		printf("phan tu thu %d la: \n", i+1);
		scanf("%d", &array[i]);
		
	}
	
}
void output3(int array[],int choice){
	printf("phan tu ban vua nhap sap xep giam dan la: ");
	for(int i = 0; i < choice; i++){
		
		printf("%d ", array[i]);
		
	}
	
	
}
void sortBotthom(int array[],int choice){
	for(int i = 0; i < choice - 1; i++){
		
		for(int j = i +1; j < choice; j++){
			int temp;
			if(array[i] < array[j]){
				 temp =array[i];
				 array[i] = array[j];
				  array[j] = temp;
				
			}
			
			
		}
	}
	
	
}

void maxArray(int array[], int choice){
	int max = array[0];
	for(int i = 0; i< choice; i++){
		
		if(max < array[i]){
			max = array[i];
		}
		
		
		
		
		
	}
	
	printf("gia tri lon nhat trong mang la : %d", max);
	
	
}
void square(int array[], int choice){
	printf("\nbinh phuong cac phan tu co trong mang la: ");
	for(int i = 0; i< choice; i++){
		
		printf("%d ", array[i]*array[i]);
		
	}
	
	
	
}


void case3(){
	
	int choice;
	do{
		printf("moi ban nhap vao so luong phan tu : \n");
		scanf("%d", &choice);
	}while(choice < 0);
	int array[choice];
	input3(array, choice);
	output3(array, choice);
	sortBotthom(array, choice);
	printf("\n");
	output3(array, choice);
	printf("\n");
	maxArray(array, choice);
	square(array, choice);
}
void vongLap1();
void vongLap2();
void vongLap3();

void menu(){
	
		printf("1. dao chuoi\n");
		printf("2. tinh tong\n");
		printf("3. mang 1 chieu\n");
		printf("4. thoat chuong trinh\n");
}



int main(){
	menu();
	int choice;
	printf("moi su lua chon cua ban co trong menu\n");
	scanf("%d", &choice);
	switch(choice){
		
		case 1:{
			
			vongLap1();
			
			
		}
		
		case 2:{
			
			case2();
			
		}
		case 3:{
			
			
		case3();
		}
		
	}
	
	
}
 void vongLap1(){
 	case1();
 	int k;
 	printf("nhan phim 4 de tiep tuc va 5 de thoat\n");
 	scanf("%d", &k);
 	while(k == 4){
 		case1();
 		printf("nhan phim 4 de tiep tuc va 5 de thoat\n");
 		scanf("%d", &k);
	 }
 	if(k == 5){
 		exit(0);
 		
	 }
 	
 	
 	
 }


