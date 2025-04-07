#include <stdio.h>
#include <conio.h>

int main() {
	float a, b;
	printf("Nhap vao 2 so nguyen ban muon kiem tra: ");
	scanf("%f%f", &a, &b);
	printf("\n");

	if(a != int(a) || b != int(b)) {//dong lap khi dieu kien sai

		printf("So ban nhap vao ko phai la so nguyen");
		//////////////////////////////////////
		float a, b;
		printf("Xin moi ban nhap lai 2 so nguyen ban muon kiem tra: ");
		scanf("%f%f", &a, &b);

		printf("\n");

		if(a != int(a) || b != int(b)) {

			printf("So ban nhap vao ko phai la so nguyen\n");
		} else  {

			if(a >= 0 && b >= 0) {
				if(a == 0 && b == 0) {
					printf("So nhap vao khong co ton tai BCLN va UCLN\n");
					printf("========================================\n");
				} else if(a == 0 || b == 0) {
					printf("So nhap vao khong co BCNH va UCLN %d\n", (a == 0)? b :a);// o day su dung toan tu 3 ngoi.
					printf("======================================================\n");
				} else { //a,b > 0
					int k = a*b;
					while(a != b) {
						if( a > b) {
							a = a- b;
						} else {
							b = b - a;
						}
					}
					printf("Uoc chung lon nhat cua 2 so la : %.0f\n", a);
					printf("=======================================\n");
					printf("Boi chung nho nhat cua 2 so la : %.0f\n", k/a);
					//break;
				}
			}

			////////////////////////////////////////////////////////////////////
		}
	} else  {
		if(a >= 0 && b >= 0) {
			if(a == 0 && b == 0) {
				printf("So nhap vao khong co ton tai BCLN va UCLN\n");
				printf("========================================\n");
			} else if(a == 0 || b == 0) {
				printf("So nhap vao khong co BCNH va UCLN %d\n", (a == 0)? b :a);// o day su dung toan tu 3 ngoi.
				printf("======================================================\n");
			} else { //a,b > 0
				int k = a*b;
				while(a != b) {
					if(a > b) {
						a = a- b;
					} else {
						b = b - a;
					}
				}
				printf("Uoc chung lon nhat cua 2 so la : %.0f\n", a);
				printf("=======================================\n");
				printf("Boi chung nho nhat cua 2 so la : %.0f", k/a);
				getch();
				return 0;
			}
		} else {// o day dung dong lap while de cho code chay lai khi dung gia tri.
			while (a < 0 ||b < 0 ) {
				float a, b;
				printf("Xin moi ban nhap lai 2 so nguyen ban muon kiem tra: ");
				scanf("%f%f", &a, &b);

				printf("\n");

				if(a != int(a) || b != int(b)) {

					printf("So ban nhap vao ko phai la so nguyen\n");
				} else  {

					if(a >= 0 && b >= 0) {
						if(a == 0 && b == 0) {
							printf("So nhap vao khong co ton tai BCLN va UCLN\n");
							printf("========================================\n");
						} else if(a == 0 || b == 0) {
							printf("So nhap vao khong co BCNH va UCLN %d\n", (a == 0)? b :a);// o day su dung toan tu 3 ngoi.
							printf("======================================================\n");
						} else { //a,b > 0
							int k = a*b;
							while(a != b) {
								if( a > b) {
									a = a- b;
								} else {
									b = b - a;
								}
							}
							printf("Uoc chung lon nhat cua 2 so la : %.0f\n", a);
							printf("=======================================\n");
							printf("Boi chung nho nhat cua 2 so la : %.0f\n", k/a);
							break;

						}

					}

				}
			}
			getch();
			return 0;
		}
		

	}

}
