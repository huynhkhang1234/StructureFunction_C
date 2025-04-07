#include <stdio.h>
#include <conio.h>
void vayTienxe(int tienVay){
	int year = 1;
	int tienLai ;
	int tienGoc= tienVay/288;//24*12thang
	int tienTra;
	int tienCon;
	tienCon = tienVay;
	printf("Ky han | Lai phai tra | Goc phai tra | so tien phai tra | so tien con lai | \n");

	for(int i = 1; i<= 288; i++){
		
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
		if(i % 12 == 0){
			year++;
			printf("===================================Ket thuc %d nam ban tra la:============================================ \n", year);
			printf("\n");
			printf("\n");	
		}
	}
}

int main(){
	int tienvay ;
	printf("Chao Mung Ban Den Voi CHuong Trinh Vay Tien Mua Xe: \n");
	scanf("%d", &tienvay);//tien xe
	int tienLaiXe = 0;//
	int tienVayXe = 0;//tien vay
	int tientratruoc = 0;//tine tra trc
		tientratruoc = tienvay * 0.2;/// tien tra trc khi ban vay la 20%
		tienVayXe = tienvay*0.8;/// tien lai xe 80%
//	tienVayXe = tienvay*tienLaiXe;
//	printf("So Tien Ban Can Phai Vay La: %d \n", tienvay);
	if(tienVayXe > 500000){
		tienVayXe = 500000;
		tientratruoc = tienvay - tienVayXe;
		printf("Tien tra truoc Cua Ban La: %d \n",tientratruoc);
		printf("Tien vay Cua ban La: %d \n",tienVayXe);
		printf("Xin loi !! Nhung So Tien Cua Ban Da Duot Muc quy Dinh!!!\n");
	//	vayTienxe(tienvay);//// vi so tien duot muc co dinh 500 trieu nen ko the chay.
	}else{
		
		vayTienxe(tienVayXe);
		printf("Tien vay Cua Ban La: %d \n",tienVayXe);
		printf("Tien tra Cua Ban  truoc La: %d \n",tientratruoc);
	   // printf("Tien vay Cua ban La: %d \n",tienLaiXe);
	}


getch();
return 0;
}
