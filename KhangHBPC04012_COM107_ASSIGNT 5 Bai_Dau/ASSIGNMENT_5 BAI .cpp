#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void case1() {


	float n;
	printf("************************************************************\n");
	printf("Chao Mung Ban Den voi Chuong Trinh Kiem Tra So Nguyen To   *\n");
	printf("************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Am!!\n");
	printf("\n");
	do {
		printf("Nhap Vao So Ban Muon Kiem Tra:  \n");
		scanf("%f", &n);
		system("cls");
	} while(n < 0);
	if(n == int(n) ) {
		printf("======================================\n");
		printf("So ban nhap: %.0f la so nguyen\n", n);
		printf("=====================================\n");
		printf("\n");
	} else {
		do {
			printf("Xin moi ban nhap lai so nguyen: \n");
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
}

void case2() {
	int a, b;
	printf("************************************************************\n");
	printf("Chao Mung Ban Den Voi Chuong Trinh Tinh Tim USC Va BSC:    *\n");
	printf("************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Am!!\n");
	printf("\n");
	do {
		printf("Nhap Vao So Thu 1  La : ");
		scanf("%d", &a);
		printf("\n");
		printf("Nhap Vao So Thu 2 La : ");
		scanf("%d", &b);
		system("cls");
		printf("\n");
	} while(a < 0 ||b < 0);
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("=========================================\n");
			printf("So Nhap Vao Khong Co Ton Tai BCLN Va UCLN\n");
			printf("==========================================\n");
		} else if(a == 0 || b == 0) {
			printf("=========================================\n");
			printf("So nhap vao khong co BCNH va UCLN %d\n", (a == 0)? b :a);// o day su dung toan tu 3 ngoi.
			printf("=========================================\n");
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
			printf("==========================================\n");
			printf("Boi chung nho nhat cua 2 so la : %d\n", k/a);
			printf("******************************************\n");

		}
	}
}

void case3() {

	int money = 150000;
	int time, startTime, endTime, gioGiamGia3, gioGiamGia4, giamGia5;
	int tienGio;
	int tongTime;
	tongTime = endTime - startTime;
	printf("************************************************************\n");
	printf("Chao Mung Ban Den Voi CHuong Trinh Tinh Tien Karaoke :     *\n");
	printf("************************************************************\n");
	printf("Moi Ban Nhap Vao Khung Thoi Gian Hoat Dong Tu 12 Gio Den 23 gio\n");
	printf("\n");
	do {
		printf("\nNhap Vao Gio Bat Bau Cua Ban: ");
		scanf("%d", &startTime);
		printf("\nNhap Vao Gio Ket Thuc Cua Ban: ");
		scanf("%d", &endTime);
	} while(startTime < 12 ||  endTime > 23 || endTime < startTime);
	tongTime = endTime - startTime;
	if( tongTime <= 3) {
		gioGiamGia3 = money*tongTime;
		printf("Gia tien ban can thanh toan la: %d\n", gioGiamGia3);
	} else {
		gioGiamGia4 = (3*money)+ (tongTime - 3)*money*0.7;
		printf("===============================================================================\n");
		printf("Gio cua ban la: %d(Tieng.phut)\nGio ban hien tai trong khunng gio khuyen mai 4 tieng nen gia tien la : %.d\n", tongTime, gioGiamGia4);
		printf("===============================================================================\n");
		printf("\n");
	}
	if(startTime >= 14 && startTime <= 17) {
		gioGiamGia4 = (3*money)+ (tongTime - 3)*money*0.7;
		giamGia5 = gioGiamGia4*0.9;
		printf("===============================================================================\n");
		printf("Dac biet hon gio cua ban nam trong khung gio khuyen mai tu 14 gio den 17 gio\nNen tien thanh toan cuoi cung la: %.d\n", giamGia5);
		printf("===============================================================================\n");
	}
}

void case4() {
#define BAC1 1678
#define BAC2 1734
#define BAC3 2014
#define BAC4 2536
#define BAC5 2834
#define BAC6 2927
	printf("************************************************************\n");
	printf("Chao Mung Ban Den Voi CHuong Trinh Tinh Tien Dien :        *\n");
	printf("************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Am!!\n");
	printf("\n");
	float soDien;
	do {//o day dung cong lenh do while thay gi dung if else dan dc.
		printf("Moi Ban Nhap Vao So Dien Tieu Thu Hang Thang: \n");
		scanf("%f",&soDien);
		system("cls");
	} while(soDien < 0);
	if(soDien <= 50) {// cong thuc bac 1 ,  0 < so dien su dung <=50  thi :1678*so dien
		printf("==========================================================================\n");
		printf("So Dien Ban Nhap La:  %0.2f\nVa So Tien Ban Can Phai Dong La: %0.2f\n", soDien, soDien*BAC1);
		printf("==========================================================================\n");
	} else if(soDien <= 100) {//cong thuc bac 2 ,  50< so dien  < 100 thi : nhan so dien bac 1 cong voi so dien bac 2 tru di 50 va * 1734
		printf("==========================================================================\n");
		printf("So Dien Ban Nhap La:   %0.2f\n Va So Tien Ban Can Phai Dong La: %0.2f\n", soDien, (50*BAC1)+ (soDien - 50)*BAC2);
		printf("==========================================================================\n");
	} else if (soDien <= 200) {//cong thuc bac 3 , 101 < so dien  < 200 thi lay so dien bac 1+ so dien bac 2 + voi so dien  tru di cho 100 va *2014
		printf("==========================================================================\n");
		printf("So Dien Ban Nhap La :  %0.2f\n Va So Tien Ban Can Phai Dong La: %0.2f\n", soDien, (50*BAC1)+ (50*BAC2)+(soDien - 100)*BAC3);
		printf("==========================================================================\n");
	} else if(soDien <= 300) {// cong thuc bac 4 ,.....
		printf("==========================================================================\n");
		printf("So dien  cua ban la: %0.2f\nVa So Tien Ban Can Phai Dong La: %0.2f\n", soDien, (50*BAC1)+ (50*BAC2)+(100*BAC3)+(soDien - 200)*BAC4);
		printf("==========================================================================\n");
	} else if(soDien <= 400) {// cong thuc bac 5,......
		printf("==========================================================================\n");
		printf("So Dien Ban Nhap La : %0.2f\nVa So Tien Ban Can Phai Dong La: %0.2f\n", soDien, (50*BAC1)+ (50*BAC2)+(100*BAC3)+(100*BAC4)+(soDien -300)*2834);
		printf("==========================================================================\n");
	} else if(soDien >= 401) {// cong thuc bac 6 ,.....
		printf("==========================================================================\n");
		printf("So Dien Ban Nhap La: %0.2f\n Va So Tien Ban Can Phai Dong La: %0.2f\n", soDien, (50*BAC1)+(50*BAC2)+(100*BAC3)+(100*BAC4)+(100*BAC5)+(soDien- 400)*BAC6);
		printf("==========================================================================\n");
	}

}

void case5() {

#define FIVEHUNDREDTHOUSAND 500//khai bao cac gia tri co dinh cua tien .
#define TWOHUNDREDTHOUSAND  200
#define ONEHUNDREDTHOUSAND  100
#define FIVETYTHOUSAND      50
#define TWOTYTHOUSAND       20
#define TENTHOUSAND         10
#define FIVETHOUSAND        5
#define TWOTHOUSAND         2
#define ONETHOUSAND         1
	printf("************************************************************\n");
	printf("Chao Mung Ban Den Voi Chuong Trinh Doi Tien :              *\n");
	printf("************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Am!!\n");
	printf("\n");
	int money ;
	float n;///khai bao cac bien luu tru cac gia tri tam thoi de chuong trinh chay ok hon.
	int fiveHundredThousan, twoHundredThousand,  oneHundredThousand, fiveTyThousand, twoTyThousand, tenThousand, fiveThousand, twoThousand, oneThousand;
	fiveHundredThousan = 0;//khai bao gia tri = o de chuong trinh chinh xac hon.
	twoHundredThousand = 0;
	oneHundredThousand = 0;
	fiveTyThousand = 0;
	twoTyThousand = 0;
	tenThousand = 0;
	fiveThousand =0;
	twoThousand =0;
	oneThousand=0;

	do {////dung dong lap do while de lap lai gia tri nhap sai

		printf("Nhap Vao So Tien Ban Muon Doi La : ");
		scanf("%d", &money);
		system("cls");
	} while(money < 0);
	/////so tien la 500 ngan de luu tam thoi
	if(money > FIVEHUNDREDTHOUSAND) {//neu tien lon hon 500 in ra
		fiveHundredThousan = money/FIVEHUNDREDTHOUSAND;
		printf("\n");
		printf("Menh gia 500 nghin co So to  la : %d to\n", fiveHundredThousan);
		printf("***************************************\n");
		printf("\n");
		money = money % FIVEHUNDREDTHOUSAND;
	}//so tien 200
	if(money >= TWOHUNDREDTHOUSAND) {
		twoHundredThousand = money / TWOHUNDREDTHOUSAND;
		printf("Menh gia 200 nghin co so to la : %d to\n", twoHundredThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % TWOHUNDREDTHOUSAND;
	}///so tien 100
	if(money >= ONEHUNDREDTHOUSAND) {
		oneHundredThousand = money / ONEHUNDREDTHOUSAND;
		printf("Menh gia 100 nghin co so to la : %d to\n", oneHundredThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % ONEHUNDREDTHOUSAND;
	}//so tien 50
	if(money >= FIVETYTHOUSAND) {
		fiveTyThousand = money / FIVETYTHOUSAND;
		printf("Menh gia 50 nghin co so to la: %d to\n", fiveTyThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % FIVETYTHOUSAND;
	}//so tien 20
	if(money >= TWOTYTHOUSAND) {
		twoTyThousand = money / TWOTYTHOUSAND;
		printf("Menh gia 20 nghin co so to la : %d to\n", twoTyThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % TWOTYTHOUSAND;
	}////so tien 10
	if(money >= TENTHOUSAND) {
		tenThousand = money / TENTHOUSAND;
		printf("Menh gia 10 nghin co so to la: %d to\n", tenThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % TENTHOUSAND;
	}///so tien 5
	if(money >= FIVETHOUSAND) {
		fiveThousand = money / FIVETHOUSAND;
		printf("Menh gia 5 nghin co so to la : %d to\n", fiveThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % FIVETHOUSAND;
	}// so tien 2
	if(money >= TWOTHOUSAND) {
		twoThousand = money/TWOTHOUSAND;
		printf("Menh gia cua 2 nghin co so to la: %d to\n", twoThousand);
		printf("***************************************\n");
		printf("\n");
		money = money % TWOTHOUSAND;
	}//so tien 1
	if(money >=  ONETHOUSAND) {
		oneThousand = money / ONETHOUSAND;
		printf("Menh gia cua 1 nghin co so to la : %d to\n", oneThousand);
		printf("***************************************\n");
		printf("\n");

	}
}

int main() {

	int n;
	do {

		printf("*============MENU===================*\n");
		printf("* 1. Kiem tra so nguyen             *\n");
		printf("* 2.Tim uoc va boi chung cua 2 so   *\n");
		printf("* 3.Tinh tien karaoke               * \n");
		printf("* 4.Tinh tien dien                  *\n");
		printf("* 5.Doi tien                        *\n");
		printf("* 6.Thoat chuong trinh              *\n");
		printf("*===================================*\n");
		printf("Moi ban chon chuc nang co trong Menu:  ");
		scanf("%d", &n);
	} while(n < 1 || n > 6);
	switch(n) {
		case 1: {

			case1();
			break;
		}
		case 2 : {

			case2();
			break;

		}
		case 3: {

			case3();
			break;
		}
		case 4: {

			case4();


			break;
		}
		case 5: {

			case5();
			break;
		}

		case 6: {

			printf("Ban lua chon thoat chuong trinh!!!\n");
			printf("Nhan enter de thoat chuong trinh");
			exit(0);
			break;
		}



	}

}












