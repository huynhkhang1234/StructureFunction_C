#include <stdio.h>
#include <conio.h>
void laiXuat(int tienVay, int laiThang, int tienGoc, int tienCon, int tienTra) {

	tienGoc = tienVay / 12;
	tienCon = tienVay;
	printf("Ky han |  Lai phai tra | Goc phai tra| So tien phai tra | So tien con lai | \n");
	for(int i = 1; i <= 12; i++) {
		int tienLai = tienCon * 0.05;
		tienTra = tienGoc +  tienLai;
		tienCon = tienCon - tienGoc;
		printf("__________________________________________________________________________________\n");
		printf("%6d | ", i);
		printf("%12d |", tienLai);
		printf("%12d |", tienGoc);
		printf("%16d |", tienTra);
		printf("%15d |", tienCon);
		printf("\n");

	}
}
int main() {

	int tienVay, laiThang, tienGoc,tienCon, tienTra;
	printf("Chao Mung Ban DEn Voi Chuont Trinh Vay Tien Ngan Hang: \n");
	printf("Nhap vao so tien ban muon vay la: ");
	scanf("%d", &tienVay);
	laiXuat(tienVay,laiThang,tienGoc,tienCon,tienTra);

	getch();
	return 0;
}
