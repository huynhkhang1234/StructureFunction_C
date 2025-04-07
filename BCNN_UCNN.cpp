#include <stdio.h>
#include <conio.h>
int tinhToan(int a, int b);

int main() {
	int a, b;
	tinhToan(a, b);
	getch();
	return 0;
}
int tinhToan(int a, int b) {

	printf("Chao Mung Ban Den Voi Chuong Trinh Tinh Tim USC Va BSC: \n");

	do {
		printf("Nhap Vao So Thu 1 La : ");
		scanf("%d", &a);
		printf("Nhap Vao So Thu  La : ");
		scanf("%d", &b);
		printf("\n");
	} while(a < 0 ||b < 0);
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("So Nhap Vao Khong Co Ton Tai BCLN Va UCLN\n");
			printf("========================================\n");
		} else if(a == 0 || b == 0) {
			printf("So nhap vao khong co BCNH va UCLN %d\n", (a == 0)? b :a);// o day su dung toan tu 3 ngoi.
			printf("======================================================\n");
		} else { //a,b > 0
			int k = a*b;
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
			printf("******************************************\n");
			printf("Uoc chung lon nhat cua 2 so la : %d\n", a);
			printf("=======================================\n");
			printf("Boi chung nho nhat cua 2 so la : %d\n", k/a);
			printf("******************************************\n");


		}
	}


}
