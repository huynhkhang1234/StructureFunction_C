#include <stdio.h>
#include <string.h>
struct SinhVien {
	char  mssv[50];
	char ten[50];
	char nganhHoc[50];
	float diemTB;
};
void input(SinhVien sv, int dssv) {
	for(int i = 0; i < dssv; i++){
	printf("Nhap vao thong tin sinh vien thu %d\n", i+1);	
	fflush(stdin);
	printf("Ma so sinh vien : ");
	gets(sv.mssv);
	printf("Nhap vao ten sinh vien: \n");
	gets(sv.ten);
	printf("Nhap ten nghanh hoc sinh vien: \n");
	gets(sv.nganhHoc);
	printf("Nhap diem trung binh cua sinh vien: \n");
	scanf("%f", &sv.diemTB);
	fflush(stdin);

		
	}

}
//char  *hocLuc(float diemTB){
//	char *st;
//	if( diemTB > 9 ){
//		printf("xuat sac");
//	}else if(diemTB >= 8){
//		printf("Gioi");
//	}else if(diemTB >= 6.5){
//		printf("Kha");
//	}else if(diemTB >= 5){
//		printf("trung Binh");
//	}else{
//		printf("Yeu");
//	}
//	
//	return st;
//}
//void output( struct SinhVien sv) {
//	printf("\n");
//	
//	printf("%7s | %-30s | %-20s | %.2f| \t %s\n", sv.mssv, sv.ten, sv.nganhHoc, sv.diemTB, "HOC LUC");

//}
//void danhsachhienthi(struct SinhVien ds[], int dssv) {
//	struct SinhVien sv;
//	printf("\n");
//	printf("======================================================================================\n");
//	printf("%7s | %-30s | %-20s | %.2f| \t %s\n", "MSSV", "NGANH HOC", "TEN SINH VIEN", "DIEM TRUNG BINH", "HOC LUC");
//	printf("=======================================================================================\n");
//	for(int i = 0; i < dssv ; i++) {
//		printf("--------------------------------------------------------------------------------------\n");
//		printf("%7s | %-30s | %-20s | %.2f| \t %s\n", sv.mssv, sv.ten, sv.nganhHoc, sv.diemTB, hocLuc(ds[i].diemTB));
//		printf("---------------------------------------------------------------------------------------\n");
//	}
//}

void sapXep( SinhVien ds[], int dssv) {
	for(int i = 0; i < dssv ; i++) {
		for(int j = i+1; j< dssv; j++) {

			if(ds[i].diemTB > ds[j].diemTB) {
				 SinhVien temp ;
				temp= ds[i];
				ds[i]= ds[j];
				ds[j]= temp;


			}
		}

	}


}

int output(SinhVien sv[], int dssv){
	
	for(int i = 0; i<= dssv; i++){
		printf("thong tin cua sinh vien thu %d la: ", i+1);
		printf("Ma so sinh vien : %s\n", sv[i].mssv);
		printf("ten sinh vien : %s\n", sv[i].ten);
		printf("nghanh hoc sinh vien : %s\n", sv[i].nganhHoc);
		printf("diem trung binh cua sinh vien: %.2f\n", sv[i].diemTB);
		
		
	}
	
	
	
}

int main() {
	
	int dssv;
	printf("Nhap vao danh sach sinh vien muon them vao: \n");
	scanf("%d", &dssv);
//	int sv[dssv];
	SinhVien sv;
	input(sv, dssv);
	int sv[dssv];
	output(sv, dssv);
}





