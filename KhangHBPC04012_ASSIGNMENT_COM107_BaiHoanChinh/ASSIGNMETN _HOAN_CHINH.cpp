#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include "windows.h" 
using namespace std;
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
	printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
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

void case6() {


	int tienVay, laiThang, tienGoc,tienCon, tienTra;
	printf("**************************************************************************\n");
	printf("Chao Mung Ban Den voi Chuong Trinh Tinh Lai Suat Ngan Hang Vay Tra Gop   *\n");
	printf("**************************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Am!!\n");
	printf("\n");
	do{
		
		printf("Nhap Vao So Tien Ban Muon Vay La: ");
		scanf("%d", &tienVay);
		system("cls");
	}while(tienVay <0  || tienVay == 0);
	tienGoc = tienVay / 12;
	tienCon = tienVay;
	printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
	printf("\n");
	printf("===========================================================================\n");
	printf("Ky han |  Lai phai tra | Goc phai tra| So tien phai tra | So tien con lai | \n");
	printf("============================================================================\n");
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
////////////////
void vayTienxe(int tienVay) {
	int year = 1;
	int tienLai ;
	int tienGoc= tienVay/288;//24*12thang
	int tienTra;
	int tienCon;
	tienCon = tienVay;
	printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
	printf("===========================================================================\n");
	printf("Ky han | Lai phai tra | Goc phai tra | so tien phai tra | so tien con lai | \n");
	printf("===========================================================================\n");
	for(int i = 1; i<= 288; i++) {

		tienLai = tienCon*0.06;//// lai xuat 7.2 nhung la cua 1 nam =>> lai xuat 1 thang = 7.2*10/12 =6% ;
		tienTra = tienGoc + tienLai;
		tienCon = tienCon - tienGoc;
		printf("-------------------------------------------------------------------------------------------------\n");
		printf("%6d |", i);
		printf("%12d |", tienLai);
		printf("%12d |", tienGoc);
		printf("%16d |", tienTra);
		printf("%15d |", tienCon);
		printf("\n");
		if(i % 12 == 0) {
			year++;
			printf("===================================Ket thuc %d nam ban tra la:============================================ \n", year);
			printf("\n");
			printf("\n");
		}
	}
}
/////////////////
void case7 () {

	printf("****************************************************************************************\n");
	printf("Chao Mung Ban Den Voi CHuong Trinh Vay Tien Mua Xe(Tien Vay Co Dinh La: 500.000 Trieu) *\n");
	printf("****************************************************************************************\n");
	int tienvay ;
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Tien Am Va Bang 0!!\n");
	printf("\n");
	do {
		printf("Xin Moi Ban Nhap vao So Tien Ma Ban Muon Vay: \n");
		scanf("%d", &tienvay);//tien xe
	} while(tienvay <= 0 || tienvay == 0);
	int tienLaiXe = 0;//
	int tienVayXe = 0;//tien vay
	int tientratruoc = 0;//tine tra trc
	tientratruoc = tienvay * 0.2;/// tien tra trc khi ban vay la 20%
	tienVayXe = tienvay*0.8;/// tien lai xe 80%
//	tienVayXe = tienvay*tienLaiXe;
//	printf("So Tien Ban Can Phai Vay La: %d \n", tienvay);
	if(tienVayXe > 500000) {
		tienVayXe = 500000;
		tientratruoc = tienvay - tienVayXe;
		printf("===============================================\n");
		printf("Tien tra truoc Cua Ban La: %d \n",tientratruoc);
		printf("Tien vay Cua ban La: %d \n",tienVayXe);
		printf("===============================================\n");
		printf("\n");
		printf("*********************************************************\n");
		printf("Xin loi !! Nhung So Tien Cua Ban Da Duot Muc quy Dinh!!!\n");
		printf("*********************************************************\n");
		//	vayTienxe(tienvay);//// vi so tien duot muc co dinh 500 trieu nen ko the chay.
	} else {
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		vayTienxe(tienVayXe);
		printf("===============================================\n");
		printf("Tien vay Cua Ban La: %d \n",tienVayXe);
		printf("----------------------------------------------\n");
		printf("Tien tra Cua Ban  truoc La: %d \n",tientratruoc);
		printf("===============================================\n");
		// printf("Tien vay Cua ban La: %d \n",tienLaiXe);
	}







}

////////////////////////////////////////////////////////////////////////////
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
int hocLuc(float diemTB) {

	if(diemTB >= 9) {
		printf("Hoc Luc Xuat Sac\n");

	} else if (diemTB >= 8) {
		printf("Hoc Luc Gioi\n");

	} else if (diemTB >= 6.5) {
		printf("Hoc Luc Kha\n");

	} else if (diemTB >= 5) {
		printf("Hoc Luc Trung Binh\n");

	} else {
		printf("Hoc Luc Yeu\n");

	}
}

void xuat(SinhVien sv[], int n) {
	for( int i =0; i <n; i++) {
		
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		fflush(stdin);
		printf("******************************************\n");
		printf("Thong Tin Sinh Sien Thu %d la: \n", i +1);
		printf("******************************************\n");
		printf("========================================\n");
		printf("MSSV: %s\n", sv[i].mssv);
		printf("Ten sinh vien: %s\n", sv[i].tenSV);
		printf("Nganh hoc: %s\n", sv[i].nganhHoc);
		printf("Diem trung binh: %.2f\n", sv[i].diemTB);
		hocLuc(sv[i].diemTB);
		printf("========================================\n");
	}
	printf("\n");
}
void sapXep(SinhVien sv[], int n) {
	printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
	for(int i= 0; i < n; i++) {
		for(int j = i+1; j<n; j++) {
			if (sv[i].diemTB < sv[j].diemTB) {
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
			printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
			printf("=====================================================================================\n");
			printf("%7s | %-30s | %-20s | %s|\n", "MSSV", "NGANH HOC", "TEN SINH VIEN", "DIEM TRUNG BINH\n");
			printf("=====================================================================================\n");
			printf("%7s | %-30s | %-20s | %.2f|\n", sv[i].mssv, sv[i].tenSV, sv[i].nganhHoc, sv[i].diemTB,hocLuc(sv[i].diemTB));
			cheack = 1;
		}
	}
	if( cheack == 0) {
		printf("===================================================================\n");
		printf(" Xin Loi!!.Nhung Khong Tim Thay thong Tin Sinh Vien Ban Muon Tim  =\n");
		printf("===================================================================\n");
	}
}
//////////////////////////////////////////////////
void case8() {
	printf("****************************************************************\n");
	printf("Chao Mung Ban Den Voi CHuong Trinh Sap Xep Thong Tin Sinh Vien *\n");
	printf("****************************************************************\n");
	int n;
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Hoc Sinh Am Va Bang 0!!\n");
	printf("\n");
	do{
	
	printf("Nhap so sinh vien ban muon them vao: ");
	scanf("%d", &n);
	}while(n < 0|| n == 0);
	SinhVien sv[n];
	nhap(sv, n);	
	printf("\n");
	xuat(sv, n);
	printf("\n");
	printf("****************************************\n");
	printf("Danh sach sinh vien sau khi sap sep la: \n");
	printf("****************************************\n");
	printf("\n");
	sapXep(sv, n);
	xuat(sv, n);
	printf("\n");
	char masv[10];
	printf("************************\n");
	printf("Nhap MSSV Ban Can Tim: \n");
	printf("************************\n");
	gets(masv);
	timkiem(sv, n, masv);
	getch ();
	printf("================================================\n");
}

void case9(){
	printf("****************************************************************\n");
	printf("Chao Mung Ban Den Voi CHuong Trinh Game FPOLY-LOTT             *\n");
	printf("****************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Ap Dung Cho Ban Nhap So  Am !!\n");
	printf("\n");
	int MIN, MAX;
	int soDuDoan1 =0;
	int soDuDoan2 = 0;
	int soBiMat1 = 0;
	int soBiMat2 = 0;
	do {
		printf("=================================================\n");
		printf("Xin Moi Ban Nhap Vao Gioi Han Cua So Bi Mat La : \n");
		printf("=================================================\n");
		
		printf("Xin Moi Ban Nhap Vao Min La: \n");
		scanf("%d", &MIN);
		printf("\n");
		printf("\n Xin Moi Ban Nhap Vao Max La: \n");
		scanf("%d", &MAX);
		system("cls");
	}while(MIN > MAX || MAX < MIN || MIN < 0 || MAX < 0); 
	srand(time(NULL));
	soBiMat1 = (rand()%(MAX - MIN + 1))+ MIN;
	soBiMat2 = (rand()%(MAX - MIN + 1))+ MIN;
	printf("***************************************\n");
	printf("So Bi Mat cua Chuong Trinh La %d %d   *\n", soBiMat1, soBiMat2);
	printf("***************************************\n");
	do {
		printf("Luu Y: Xin Moi Ban Nhap So Du Doan Nam Trong Gioi Han!!!!\n");
		printf("\n");
		printf("Moi Xin Moi Ban Nhap Vao Du Doan So Thu 1 la: ");
		scanf("%d", &soDuDoan1);
		printf("\n");
		printf("Moi xin Moi Ban Nhap Vao Du Doan  So Thu 2 la: ");
		scanf("%d", &soDuDoan2);
		printf("\n");
	} while(soDuDoan1 > MAX || soDuDoan1 < MIN||soDuDoan2 > MAX || soDuDoan2 < MIN);
	if((soDuDoan1 == soBiMat1 && soDuDoan2 == soBiMat2) || (soDuDoan1 == soBiMat2 && soDuDoan2 == soBiMat1)) {

		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
   		
		/////////////////////////////////////////////
		
		printf("************************************\n");
		printf("Chuc mung ban da chung giai nhat!!!*\n");
		printf("************************************\n");
	
	} else if(soDuDoan1 == soBiMat1 || soDuDoan1 == soDuDoan2 || soDuDoan2 == soBiMat1 || soDuDoan2 == soBiMat2) {
		
		
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
   		printf("***********************************\n");
		printf("Chuc mung ban da trung giai nhi!! *\n");
		printf("***********************************\n");
	} else {
		
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
   		printf("*****************************\n");
		printf("Chuc ban may man lan sau!!  *\n");
		printf("*****************************\n");
		
		
	}
	
	
	
}
//////////////////////////////////////////////////////////////////////
struct PhanSo{
	int tuSo;
	int mauSo;
};

void rutGon(PhanSo *ps){
	// Tim USCLN
	int a = ps->tuSo;
	int b = ps->mauSo;

	a = abs(a);
	b = abs(b);
	
	int USCLN =1;
	// TH1
	if(a==0 || b==0){
		USCLN = (a+b);
	}else{
	//TH2
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		USCLN = a;	
	}
	ps->tuSo/=USCLN;
	ps->mauSo/=USCLN;
}

void nhapPhanSo(PhanSo *ps){/// su dung con tro 
	printf("===========================\n");
	printf("Xin Moi Ban Nhap Tu So:   \n");
	printf("===========================\n");
	scanf("%d", &ps->tuSo);
	do{
		printf("============================\n");
		printf("Xin Moi Ban Nhap Mau So:   \n");
		printf("============================\n");
		scanf("%d", &ps->mauSo);
		system("cls");//// xoa man hinh
	}while(ps->mauSo ==0 );/// o day co the la su dung . hoac-> vi do chinh la dung de truy suat cac thuoc tinh doi 
	//tuong va o day toi su dung la ->,vi doi tuong ta tro den la 1 con tro.
}

void inPhanSo(PhanSo ps){
	if(ps.mauSo<0){
		ps.tuSo*=-1;///o day co nghia la -ps.tuso
		ps.mauSo*=-1;
	}
	rutGon(&ps);
	if(ps.mauSo==1){
		printf("%d", ps.tuSo);
	}else{
		printf("%d/%d", ps.tuSo, ps.mauSo);
	}

}

PhanSo congHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo ketQua;
	// a/b + c/d => (a*d + c*b)/(b*d)
	ketQua.tuSo = ps1.tuSo*ps2.mauSo + ps2.tuSo*ps1.mauSo;
	ketQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}

PhanSo truHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo ketQua;
	// a/b + c/d => (a*d - c*b)/(b*d)
	ketQua.tuSo = ps1.tuSo*ps2.mauSo - ps2.tuSo*ps1.mauSo;
	ketQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}

PhanSo nhanHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo ketQua;
	// a/b + c/d => (a*c)/(b*d)
	ketQua.tuSo = ps1.tuSo*ps2.tuSo;
	ketQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}

PhanSo chiaHaiPhanSo(PhanSo ps1, PhanSo ps2){
	PhanSo ketQua;
	// a/b + c/d => (a*d)/(b*c)
	ketQua.tuSo = ps1.tuSo*ps2.mauSo;
	ketQua.mauSo = ps1.mauSo*ps2.tuSo;
	return ketQua;
}
//////////////////////////////////////////////////////////////////////////
void case10(){
	printf("****************************************************************\n");
	printf("Chao Mung Ban Den Voi CHuong Trinh Tinh Toan Hai Phan So       *\n");
	printf("****************************************************************\n");
	PhanSo ps1, ps2;
	printf("****************************************************\n");
	printf("Luu y: Xin Moi Ban Nhap Mau So Khac 0!!!           *\n");
	printf("****************************************************\n");
	printf("\n Xin Moi Ban Nhap Vao Phan So Thu Nhat: ");
	printf("\n");
	nhapPhanSo(&ps1);
	printf("\n Xin Moi Ban Nhap Vao Phan So Thu Hai: ");
	printf("\n");
	nhapPhanSo(&ps2);
	printf("\nPhan so vua nhap la: ");
	printf("Phan So Thu Nhat Ban Vua Nhap La: \n");
	inPhanSo(ps1);
	printf("Phan so thu Hai Ban Vua Nhap La : \n");
	inPhanSo(ps2);
	printf("\n");
	printf("\nCHuong Trinh Thuc Hien Cac Phep Tinh: \n");
	printf("\n");
	printf("Phep Tinh Cong 2 Phan So La: \n");
	printf("*************************************************\n");
	printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
	inPhanSo(ps1); printf(" + "); inPhanSo(ps2); printf(" = "); inPhanSo(congHaiPhanSo(ps1, ps2));	
	printf("\n");
	printf("Phep Tinh  Tru Phan So La: \n");
	printf("*************************************************\n");
	inPhanSo(ps1); printf(" - "); inPhanSo(ps2); printf(" = "); inPhanSo(truHaiPhanSo(ps1, ps2));
	printf("\n");
	printf("Phep Tinh Nhan 2 Phan So La: \n");	
	printf("**************************************************\n");
	inPhanSo(ps1); printf(" * "); inPhanSo(ps2); printf(" = "); inPhanSo(nhanHaiPhanSo(ps1, ps2));	
	printf("\n");
	printf("Phep Tinh Chia 2 Phan So La: \n");
	printf("***************************************************\n");
	inPhanSo(ps1); printf(" : "); inPhanSo(ps2); printf(" = "); inPhanSo(chiaHaiPhanSo(ps1, ps2));	
	
}
///////////////////////////////////////////////////////////////////////
void case11(){
			
			////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...Ban Lua Chon Thoat Chuong Trinh !!!...." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t........Nhan Enter De Thoat!!............." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...Cam On Ban Da Su Dung Chuong TRinh ...." << endl << endl;
   		exit(0);
   		system("cls");
		/////////////////////////////////////////////
	
	
}
void menu() {

	printf("*********************MENU*************************************\n");
	printf("    1.Chuong Trinh Kiem Tra So Nguyen To                     *\n");
	printf("    2.Tim Uoc So CHung Va Boi Chung Cua 2 So                 *\n");
	printf("    3.Chuong Trinh Tinh Tien Cho puan Karaoke                *\n");
	printf("    4.Chuong Trinh Tinh Tien Dien                            *\n");
	printf("    5.Chuong Trinh Doi Tien                                  *\n");
	printf("    6.Chuong Trinh Tinh Lai Suat Vay Ngan Hang Vay Tra Gop   *\n");
	printf("    7.Chuong trinh Vay Tien Mua Xe                           *\n");
	printf("    8.Chuong Trinh Sap Xep Thong Tin Sinh Vien               *\n");
	printf("    9.Chuong Trinh Gema  FPLOY-LOTT                          *\n");
	printf("    10.Chuong Trinh Tinh Toan Phan So                        *\n");
	printf("    11.Thoat Chuong Trinh                                    *\n");
	printf("**************************************************************\n");







}







void vongLap1();
void vongLap2();
void vongLap3();
void vongLap4();
void vongLap5();
void vongLap6();
void vongLap7();
void vongLap8();
void vongLap9();
void vongLap10();
void vongLap11();
int main() {
	int luaChon;
	do {

		menu();
		printf("Xin Moi Ban Lua Chon Chuc Nang Co Trong MENU\n");
		scanf("%d",&luaChon);
		system("cls");
	} while(luaChon > 11 || luaChon <1);

	switch (luaChon) {

		case 1: {

		
			vongLap1();
		}
		
		case 2: {

		
			vongLap2();
			
		}

		case 3: {

			vongLap3();

			
		}

		case 4: {

			vongLap4();

			
		}

		case 5: {

			vongLap5();


		
		}

		case 6: {


			vongLap6();


		
		}
		case 7: {


			vongLap7();

		
		}

		case 8: {

			vongLap8();

			
		}

		case 9:{
			
			vongLap9();
			
		
		}
		case 10:{
			
			
			vongLap10();
		
			
		}
		case 11 : {
			
			
			vongLap11();
			
			
			
		}

	}//wsitch
}
void vongLap1(){

	int k;
	int s;
	case1();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap1();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
		vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}


}//
void vongLap2(){
	case2();
	int k;
	int s;
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap2();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
		}while( k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
 	vongLap6();
	}
	while(s == 7) {
	 vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
		vongLap9();
	}
	
	while(s == 10) {
		vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
	
	
	
}
void vongLap3(){
	
	
	int k;
	int s;
	case3();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap3();
	do{
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
}
	
void vongLap4(){
	
	int k;
	int s;
	case4();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap4();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
	
	
}
void vongLap5(){
	
	int k;
	int s;
	case5();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap5();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
	
	
	
	
	
}
void vongLap6(){
	
	int k;
	int s;
	case6();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap6();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
	vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
	
}
void vongLap7(){
	
	int k;
	int s;
	case7();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap7();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
}
void vongLap8(){
	
	
	int k;
	int s;
	case8();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap8();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
}
void vongLap9(){
	
	
	
	int k;
	int s;
	case9();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap9();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................500%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
	
}
void vongLap10(){
	
	
	
	
	int k;
	int s;
	case10();
	do {
		printf("\n===================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("=====================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap10();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
}
void vongLap11(){
	
	
	
	int k;
	int s;
	case11();
	do {
		printf("\n======================================================\n");
		printf("Xin moi ban chon phim 1 de tiep tuc chuong trinh    * \n");
		printf("Hoac la chon phim 0 de thoat chuong trinh           * \n");
		printf("======================================================\n");
		printf("\n");
		scanf("%d", &k);
		system("cls");
	} while(k > 1|| k < 0);
	system("cls");
	while(k == 1) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		vongLap11();
		do{
		
		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" Xin moi ban chon phim 1 de tiep tuc chuong trinh  +\n");
		printf(" Hoac chon phim 0 de thoat chuong trinh            +\n");
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &k);
		system("cls");
	}while(k > 1|| k < 0);
	}
	if(k == 0) {
		////////////////////////////
		printf("Xin Vui Long Cho Trong Giay Lat!!!!!!!!!!!!!!!!!!!\n");
		cout << "\t\t..................lOADING................." << endl;
		cout << "\t\t...................10%%%.................." << endl; Sleep(200);
		cout << "\t\t...................20%%%.................." << endl; Sleep(200);
		cout << "\t\t...................30%%%.................." << endl; Sleep(200);
		cout << "\t\t.................. 40%%%.................." << endl; Sleep(200);
		cout << "\t\t...................50%%%.................." << endl; Sleep(200);
		cout << "\t\t...................60%%%.................." << endl; Sleep(200);
		cout << "\t\t...................70%%%.................." << endl; Sleep(200);
		cout << "\t\t...................80%%%.................." << endl;Sleep(200);
		cout << "\t\t...................90%%%.................." << endl; Sleep(200);
		cout << "\t\t...................100%%%................." << endl; Sleep(200);
   		cout << "\t\t...................THANH CONG............." << endl << endl;
   		system("cls");
		/////////////////////////////////////////////
		menu();
	}
	do {
		printf("Moi su lua chon cua ban co trong Menu\n");
		scanf("%d", &s);
	} while(s > 11 || s < 1);
	while(s == 1) {
		vongLap1();
	}
	while(s == 2) {
		vongLap2();
	}
	while(s == 3) {
		vongLap3();
	}
	while(s == 4) {
		vongLap4();
	}
	while(s == 5) {
		vongLap5();
	}
	while(s == 6) {
		vongLap6();
	}
	while(s == 7) {
		vongLap7();
	}
	while(s == 8) {
		vongLap8();
	}
	while(s == 9) {
	vongLap9();
	}
	
	while(s == 10) {
	vongLap10();
	}
	while(s == 11) {
		vongLap11();
	}
	
}
