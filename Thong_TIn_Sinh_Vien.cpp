#include<stdio.h>
#include<conio.h>
#include<string.h>
struct SinhVien {
	char mssv[50];
	char tenSV[50];
	char nganhHoc[50];
	float diemTB;
};
void nhap(SinhVien sv[], int n) {
	for ( int i =0; i <n; i++) {
		fflush(stdin);
		printf("Nhap Thong Tin Sinh Vien thu %d la: \n", i + 1);
		printf("Nhap MSSV: ");
		gets(sv[i].mssv);
		printf("Nhap ten sinh vien: ");
		gets(sv[i].tenSV);
		printf("Nhap nganh hoc: ");
		gets(sv[i].nganhHoc);
		printf("Nhap diem trung binh: ");
		scanf("%f", &sv[i].diemTB);
	}
}


void xuat(SinhVien sv[], int n) {
	for( int i =0; i <n; i++) {
		fflush(stdin);
		printf("******************************************\n");
		printf("Thong Tin Sinh Sien Thu %d la: \n", i +1);
		printf("******************************************\n");
		printf("========================================\n");
		printf("MSSV: %s\n", sv[i].mssv);
		printf("Ten sinh vien: %s\n", sv[i].tenSV);
		printf("Nganh hoc: %s\n", sv[i].nganhHoc);
		printf("Diem trung binh: %.2f\n", sv[i].diemTB);
		printf("========================================\n");
	}   printf("\n");
}


int main() {
	int n;
	printf("Nhap so sinh vien ban muon them vao: ");
	scanf("%d", &n);
	SinhVien sv[n];
	nhap(sv, n);
	printf("\n");
	xuat(sv, n);
	printf("\n");
	getch ();
	printf("================================================\n");
}

