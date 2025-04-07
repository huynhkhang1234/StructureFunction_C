#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void case6() {

	int tienVay, laiThang, tienGoc,tienCon, tienTra;
	printf("**************************************************************************\n");
	printf("Chao Mung Ban Den voi Chuong Trinh Tinh Lai Suat Ngan Hang Vay Tra Gop   *\n");
	printf("**************************************************************************\n");
	printf("Luu Y: Chuong Trinh Khong Cho Phep Ban Nhap So Am!!\n");
	printf("\n");
	do {

		printf("Nhap Vao So Tien Ban Muon Vay La: ");
		scanf("%d", &tienVay);
		system("cls");
	} while(tienVay <0  || tienVay == 0);
	tienGoc = tienVay / 12;
	tienCon = tienVay;
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
	do {

		printf("Nhap so sinh vien ban muon them vao: ");
		scanf("%d", &n);
	} while(n < 0|| n == 0);
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

void case9() {
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
	} while(MIN > MAX || MAX < MIN || MIN < 0 || MAX < 0);
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
		printf("************************************\n");
		printf("Chuc mung ban da chung giai nhat!!!*\n");
		printf("************************************\n");
	} else if(soDuDoan1 == soBiMat1 || soDuDoan1 == soDuDoan2 || soDuDoan2 == soBiMat1 || soDuDoan2 == soBiMat2) {
		printf("***********************************\n");
		printf("Chuc mung ban da trung giai nhi!! *\n");
		printf("***********************************\n");
	} else {
		printf("*****************************\n");
		printf("Chuc ban may man lan sau!!  *\n");
		printf("*****************************\n");
	}



}
//////////////////////////////////////////////////////////////////////
struct PhanSo {
	int tuSo;
	int mauSo;
};

void rutGon(PhanSo *ps) {
	// Tim USCLN
	int a = ps->tuSo;
	int b = ps->mauSo;

	a = abs(a);
	b = abs(b);

	int USCLN =1;
	// TH1
	if(a==0 || b==0) {
		USCLN = (a+b);
	} else {
		//TH2
		while(a!=b) {
			if(a>b) {
				a = a-b;
			} else {
				b = b-a;
			}
		}
		USCLN = a;
	}
	ps->tuSo/=USCLN;
	ps->mauSo/=USCLN;
}

void nhapPhanSo(PhanSo *ps) { /// su dung con tro
	printf("===========================\n");
	printf("Xin Moi Ban Nhap Tu So:   \n");
	printf("===========================\n");
	scanf("%d", &ps->tuSo);
	do {
		printf("============================\n");
		printf("Xin Moi Ban Nhap Mau So:   \n");
		printf("============================\n");
		scanf("%d", &ps->mauSo);
		system("cls");//// xoa man hinh
	} while(ps->mauSo ==0 );/// o day co the la su dung . hoac-> vi do chinh la dung de truy suat cac thuoc tinh doi
	//tuong va o day toi su dung la ->,vi doi tuong ta tro den la 1 con tro.
}

void inPhanSo(PhanSo ps) {
	if(ps.mauSo<0) {
		ps.tuSo*=-1;///o day co nghia la -ps.tuso
		ps.mauSo*=-1;
	}
	rutGon(&ps);
	if(ps.mauSo==1) {
		printf("%d", ps.tuSo);
	} else {
		printf("%d/%d", ps.tuSo, ps.mauSo);
	}

}

PhanSo congHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ketQua;
	// a/b + c/d => (a*d + c*b)/(b*d)
	ketQua.tuSo = ps1.tuSo*ps2.mauSo + ps2.tuSo*ps1.mauSo;
	ketQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}

PhanSo truHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ketQua;
	// a/b + c/d => (a*d - c*b)/(b*d)
	ketQua.tuSo = ps1.tuSo*ps2.mauSo - ps2.tuSo*ps1.mauSo;
	ketQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}

PhanSo nhanHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ketQua;
	// a/b + c/d => (a*c)/(b*d)
	ketQua.tuSo = ps1.tuSo*ps2.tuSo;
	ketQua.mauSo = ps1.mauSo*ps2.mauSo;
	return ketQua;
}

PhanSo chiaHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ketQua;
	// a/b + c/d => (a*d)/(b*c)
	ketQua.tuSo = ps1.tuSo*ps2.mauSo;
	ketQua.mauSo = ps1.mauSo*ps2.tuSo;
	return ketQua;
}
//////////////////////////////////////////////////////////////////////////
void case10() {
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
	inPhanSo(ps1);
	printf(" + ");
	inPhanSo(ps2);
	printf(" = ");
	inPhanSo(congHaiPhanSo(ps1, ps2));
	printf("\n");
	printf("Phep Tinh  Tru Phan So La: \n");
	printf("*************************************************\n");
	inPhanSo(ps1);
	printf(" - ");
	inPhanSo(ps2);
	printf(" = ");
	inPhanSo(truHaiPhanSo(ps1, ps2));
	printf("\n");
	printf("Phep Tinh Nhan 2 Phan So La: \n");
	printf("**************************************************\n");
	inPhanSo(ps1);
	printf(" * ");
	inPhanSo(ps2);
	printf(" = ");
	inPhanSo(nhanHaiPhanSo(ps1, ps2));
	printf("\n");
	printf("Phep Tinh Chia 2 Phan So La: \n");
	printf("***************************************************\n");
	inPhanSo(ps1);
	printf(" : ");
	inPhanSo(ps2);
	printf(" = ");
	inPhanSo(chiaHaiPhanSo(ps1, ps2));

}
void menu() {
	printf("********************MENU**************************************\n");
	printf("    6.Chuong Trinh Tinh Lai Suat Vay Ngan Hang Vay Tra Gop   *\n");
	printf("    7.Chuong trinh Vay Tien Mua Xe                           *\n");
	printf("    8.Chuong Trinh Sap Xep Thong Tin Sinh Vien               *\n");
	printf("    9.Chuong Trinh Gema  FPLOY-LOTT                          *\n");
	printf("    10.Chuong Trinh Tinh Toan Phan So                        *\n");
	printf("    11.Thoat Chuong Trinh                                    *\n");
	printf("**************************************************************\n");

}
void case11(){
	
	printf("Ban Chon Thoat Chuong Trinh\n");
	printf("Nhan enter de Thoat Chuong Trinh\n");
	
	
}
int main() {
	int n;
	menu();
	do {
		printf("Xin Moi Ban Nhap Vao Chuong trinh Co Trong MENU: \n");
		scanf("%d", &n);
	} while(n < 6 || n >11);
	switch(n) {

		case 6: {

			case6();

			break;
		}
		case 7: {

			case7();
			break;
		}
		case 8: {
			case8();


			break;
		}

		case 9 :{


				case9();
				break;
			}
		case 10: {


				case10();
				break;
			}
		case 11: {

				case11();

				break;
			}







	}





















}
