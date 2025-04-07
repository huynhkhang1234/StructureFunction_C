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
		printf("Thong Tin Sinh Sien Thu %d la: \n", i +1);
		printf("MSSV: %s\n", sv[i].mssv);
		printf("Ten sinh vien: %s\n", sv[i].tenSV);
		printf("Nganh hoc: %s\n", sv[i].nganhHoc);
		printf("Diem trung binh: %.2f\n", sv[i].diemTB);
	}
}
void sapXep(SinhVien sv[], int n) {
	for(int i= 0; i < n; i++) {
		for(int j = i+1; j<n; j++) {
			if (sv[i].diemTB > sv[j].diemTB) {
				SinhVien temp;
				temp = sv[i];
				sv[i]= sv[j];
				sv[j] = temp;
			}
		}
	}
}
void timkiem(SinhVien sv[], int n, char masv[]) {
	int cheack = 0;
	for (int i =0; i< n; i++) {
		if(strcmp(masv, sv[i].mssv) == 0) {
		printf("======================================================================================\n");
		printf("%7s | %-30s | %-20s | %s\n", "MSSV", "NGANH HOC", "TEN SINH VIEN", "DIEM TRUNG BINH");
		printf("=======================================================================================\n");
		
		printf("%7s | %-30s | %-20s | %.2f\n", sv[i].mssv, sv[i].tenSV, sv[i].nganhHoc, sv[i].diemTB);
	
		cheack = 1;	
		}
	}
	if( cheack == 0){
		
		printf(" Xin loi!! Khong Tim Thay MSSV Ban Tim");
	}
}
int main() {
	int n;
	printf("Nhap so sinh vien ban muon them vao: ");scanf("%d", &n);
	SinhVien sv[n];
	
	nhap(sv, n);
	printf("\n");
	
	printf("=======================================================\n");
	xuat(sv, n);
	printf("=======================================================\n");
	printf("\n");
	
	printf("Danh sach sinh vien sau khi sap sep la: \n");

	sapXep(sv, n);
	printf("=======================================================\n");
	xuat(sv, n);
	printf("============================================================\n");
	printf("\n");
	char masv[10];
	printf("Nhap MSSV Ban Can Tim: ");gets(masv);
	timkiem(sv, n, masv);
	getch ();
	return 0 ;
}
