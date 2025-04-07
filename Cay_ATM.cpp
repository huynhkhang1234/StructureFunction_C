#include <stdio.h>
#include <conio.h>
#define FIVEHUNDREDTHOUSAND 500//khai bao cac gia tri co dinh cua tien .
#define TWOHUNDREDTHOUSAND  200
#define ONEHUNDREDTHOUSAND  100
#define FIVETYTHOUSAND      50
#define TWOTYTHOUSAND       20
#define TENTHOUSAND         10
#define FIVETHOUSAND        5
#define TWOTHOUSAND         2
#define ONETHOUSAND         1

int main() {
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
	printf("Chao Mung Ban Den Voi Chuong Trinh Doi Tien: \n");
	do {////dung dong lap do while de lap lai gia tri nhap sai

		printf("Nhap vao so tien ban muon doi la : ");
		scanf("%d", &money);

	} while(money < 0);
	/////so tien la 500 ngan de luu tam thoi
	if(money > FIVEHUNDREDTHOUSAND) {//neu tien lon hon 500 in ra
		fiveHundredThousan = money/FIVEHUNDREDTHOUSAND;
		printf("Menh gia 500 nghin co So to  la : %d\n", fiveHundredThousan);
		money = money % FIVEHUNDREDTHOUSAND;
	}//so tien 200
	if(money >= TWOHUNDREDTHOUSAND) {
		twoHundredThousand = money / TWOHUNDREDTHOUSAND;
		printf("Menh gia 200 nghin co so to la : %d\n", twoHundredThousand);
		money = money % TWOHUNDREDTHOUSAND;
	}///so tien 100
	if(money >= ONEHUNDREDTHOUSAND) {
		oneHundredThousand = money / ONEHUNDREDTHOUSAND;
		printf("Menh gia 100 nghin co so to la : %d\n", oneHundredThousand);
		money = money % ONEHUNDREDTHOUSAND;
	}//so tien 50
	if(money >= FIVETYTHOUSAND) {
		fiveTyThousand = money / FIVETYTHOUSAND;
		printf("Menh gia 50 nghin co so to la: %d\n", fiveTyThousand);
		money = money % FIVETYTHOUSAND;
	}//so tien 20
	if(money >= TWOTYTHOUSAND) {
		twoTyThousand = money / TWOTYTHOUSAND;
		printf("Menh gia 20 nghin co so to la : %d\n", twoTyThousand);
		money = money % TWOTYTHOUSAND;
	}////so tien 10
	if(money >= TENTHOUSAND) {
		tenThousand = money / TENTHOUSAND;
		printf("Menh gia 10 nghin co so to la: %d\n", tenThousand);
		money = money % TENTHOUSAND;
	}///so tien 5
	if(money >= FIVETHOUSAND) {
		fiveThousand = money / FIVETHOUSAND;
		printf("Menh gia 5 nghin co so to la : %d\n", fiveThousand);
		money = money % FIVETHOUSAND;
	}// so tien 2
	if(money >= TWOTHOUSAND) {
		twoThousand = money/TWOTHOUSAND;
		printf("Menh gia cua 2 nghin co so to la: %d\n", twoThousand);
		money = money % TWOTHOUSAND;
	}//so tien 1 
	if(money >=  ONETHOUSAND) {
		oneThousand = money / ONETHOUSAND;
		printf("Menh gia cua 1 nghin co so to la : %d\n", oneThousand);
		getch();
		return 0;

	}

}
