#include <stdio.h>
#include <math.h>
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

int main(){
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
