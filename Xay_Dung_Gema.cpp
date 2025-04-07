#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int MIN, MAX;
	int soDuDoan1 =0;
	int soDuDoan2 = 0;
	int soBiMat1 = 0;
	int soBiMat2 = 0;
	do {

		printf("Xin Moi Ban Nhap Vao Gioi Han Cua So Bi Mat La : \n");
		printf("Nhap Vao Min La: \n");
		scanf("%d", &MIN);
		printf("\nNhap Vao Max La: \n");
		scanf("%d", &MAX);
	}while(MIN > MAX || MAX < MIN);
	srand(time(NULL));
	soBiMat1 = (rand()%(MAX - MIN + 1))+ MIN;
	soBiMat2 = (rand()%(MAX - MIN + 1))+ MIN;
	printf("So bi mat la %d %d\n", soBiMat1, soBiMat2);
	do {
		printf("Moi xin Moi Ban Nhap Vao So Thu 1 la: ");
		scanf("%d", &soDuDoan1);
		printf("Moi xin Moi Ban Nhap Vao So Thu 2 la: ");
		scanf("%d", &soDuDoan2);
	} while(soDuDoan1 > MAX || soDuDoan1 < MIN||soDuDoan2 > MAX || soDuDoan2 < MIN);
	if((soDuDoan1 == soBiMat1 && soDuDoan2 == soBiMat2) || (soDuDoan1 == soBiMat2 && soDuDoan2 == soBiMat1)) {
		printf("Chuc mung ban da chung giai nhat!!!");

	} else if(soDuDoan1 == soBiMat1 || soDuDoan1 == soDuDoan2 || soDuDoan2 == soBiMat1 || soDuDoan2 == soBiMat2) {
		printf("Chuc mung ban da trung giai nhi!!");

	} else {
		printf("Chuc ban may man lan sau!!");
	}








}
