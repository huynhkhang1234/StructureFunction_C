#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	int money = 150000;
	int time, startTime, endTime, gioGiamGia3, gioGiamGia4, giamGia5;
	int tienGio;
	int tongTime;
	 tongTime = endTime - startTime;
	 printf("Chao Mung Ban Den Voi CHuong Trinh Tinh Tien Karaoke : \n");
	 printf("Moi Ban Nhap Vao Khung Thoi Gian Hoat Dong Tu 12 Gio Den 23 gio\n");
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
		printf("Gio cua ban la: %d(Tieng.phut)\nGio ban hien tai trong khunng gio khuyen mai 4 tieng nen gia tien la : %.d\n", tongTime, gioGiamGia4);
		printf("\n");
	}
	if(startTime >= 14 && startTime <= 17) {
	gioGiamGia4 = (3*money)+ (tongTime - 3)*money*0.7;
		giamGia5 = gioGiamGia4*0.9;
		printf("Dac biet hon gio cua ban nam trong khung gio khuyen mai tu 14 gio den 17 gio\nNen tien thanh toan cuoi cung la: %.d\n", giamGia5);
		
		}
	getch();
	return 0;


}

