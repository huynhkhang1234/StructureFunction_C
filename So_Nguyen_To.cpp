#include <stdio.h>
#include <conio.h>
#include <math.h>
int  main() {
	float n;
	do {
		printf("Nhap vao so ban muon kiem tra:  \n");
		scanf("%f", &n);
	} while(n < 0);
	if(n == int(n) ) {
		printf("======================================\n");
		printf("So ban nhap: %.0f la so nguyen\n", n);
		printf("=====================================\n");
		printf("\n");
	} else {
		do {
			printf("Xin moi ban nhap lai so nguyen: ");
			scanf("%f", &n);
		} while(n != float(n));
		printf("So ban nhap : %.0f la so nguyen\n",n);
		printf("++++++++++++++++++++++++++++++++++++++++\n");
		printf("\n");
	}
	int  i, dem = 0;
	if( n <= 2 ) {
		printf("so ban nhap: %.0f khong la so nguyen to.\n", n);
		printf("=====================================\n");
		printf("\n");
	} else { //n>=2
		for(i = 2; i <= sqrt(n); i++) {

			if(int(n) % i ==0)
				dem++;
		}
		if(dem == 0) {
			printf("so ban nhap : %.0f  la  so nguyen to.\n",n);
			printf("==========================================\n");
			printf("\n");
		} else {
			printf(" So ban nhap: %.0f  khong la so nguyen to.\n", n);
			printf("============================================\n");
			printf("\n");
		}
	}

	for(i = 1; i <= n; i++) {
		if(pow(i,2) == n) {
			printf("So ban nhap: %.0f la so chinh phuong", n);
			break;
			printf("========================================\n");
			printf("\n");
		}
	}
	if( pow(i,2) != n) {
		printf("So ban nhap: %.0f khong la so chinh phuong", n);
	}
	getch();
	return 0;
}

