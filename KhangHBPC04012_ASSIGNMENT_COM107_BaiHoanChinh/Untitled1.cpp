#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////

void menu() {
	printf("1.thong tin ca nhan\n");
	printf("2.thuong tet\n");
	printf("3.thong tin lop hoc\n");
	printf("0.thoat\n");


}
struct introduce {
	char name[20];
	int age;
	float weight;

};
/// de 1
void input(introduce array[], int choice) {

	for(int i = 0; i< choice; i++) {

		printf("\nThong tin cua ban thu %d la \n", i+1);
		fflush(stdin);
		printf("Nhap vao ten la: \n");
		gets(array[i].name);
		printf("nhap vao tuoi la: \n");
		scanf("%d", &array[i].age);
		printf("Nhap vao can nang la: \n");
		scanf("%f", &array[i].weight);



	}


}
void output(introduce array[], int choice) {
	for(int i = 0; i< choice; i++) {
		printf("\nthong tin cua ban thu %d la: \n", i+1);
		fflush(stdin);
		printf("\nten ban vua nhap la: %s \n", array[i].name);
		printf("\ntuoi cua ban vua nhap la: %d", array[i].age);
		printf("\ncan nang cua ban vua nhap la: %.2f", array[i].weight);
	}


}
////////////case 2 thuong tet
void bonus() {// thuong tet

	int year = 0;
	printf("Nhap vao nam kinh nghiem: \n");
	scanf("%d", &year);

	(year <= 5) ? printf("thuong 5 trieu"):(year <= 10)?printf("Thuong 10 trieu"):printf("thuong 20 trieu");



}
//////ket thuc case2

//////case 3///////////////////{
struct studens {
	int siSo;


};
void input3(studens array[], int choice) {
	for(int i = 0; i < choice; i++) {
		printf("Nhap vao thong tin cua lop thu %d la:\n", i+1);
		printf("nhap mang chi so lop la: \n");
		scanf("%d", &array[i].siSo);


	}

}

void output3(studens array[], int choice) {


	for(int i = 0; i < choice; i++) {
		printf("thong tin cua lop thu %d\n", i+1);
		printf("so luong lop la: %d \n", array[i].siSo);

	}



}



void studenMax(studens array[], int choice) {
	int count = 0;
	for(int i = 0; i < choice; i++) {

		if(array[i].siSo > 40) {
			count++;

		}

	}
	printf("so lop co si so >=40 la: %d", count);

}

void studenMaxMax(studens array[], int choice) {
	int max = array[0].siSo;
	for(int i = 0; i < choice; i++) {
		if(max < array[i].siSo) {

			max = array[i].siSo;

		}

	}
	printf("lop co si so lon nhat la: %d", max);

}
void case3() {
	int choice;
	do {

		printf("Nhap so luong lop la :");
		scanf("%d", &choice);
	} while(choice < 3);
	studens array[choice];
	input3(array, choice);
	printf("\n");
	output3(array, choice);
	printf("\n");
	studenMax(array, choice);
	printf("\n");
	studenMaxMax(array, choice);
}

void vongLap1();
void vongLap2();//
void vongLap3();//
void vongLap0();//
void case1() {

	int choice;
	printf("Nhap vao so luong ban muon tham gia: \n");
	scanf("%d", &choice);
	introduce array[choice];
	input(array, choice);
	output(array, choice);

}


void case2() {
	int choice;
	bonus();

}


void case0(){
	
	printf("Ban lua chon thoat chuong trinh: \n");
	printf("nhan enter de thoat chuong trinh: \n");
	exit(0);
	
}
int main() {
	menu();
	int luaChon;
	printf("moi ban lua chon : \n");
	scanf("%d", &luaChon);

	switch(luaChon) {
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
			
			vongLap0();
		}

	}
}
void vongLap1() {

	case1();// khai bao

	int k;
	do {

		printf("\nnhan phim 1 de tiep tuc chuong trinh hoac nhan phim 0 de ket thuc: \n");
		scanf("%d", &k);
	} while( k < 0 || k > 1);
	system("cls");
	while(k == 1) {

		case1();/// khai bao case

		do {

			printf("\nnhan phim 1 de tiep tuc chuong trinh hoac nhan phim 0 de ket thuc: \n");
			scanf("%d", &k);
		} while( k < 0 || k > 1);
		system("cls");
	}
	if(k == 0) {
		menu();
	}
	do {
		printf("Moi ban lua chon : \n");
		scanf("%d", &k);

	} while(k >4 || k < 0);
	while(k == 1) {
		vongLap1();
	}
	while(k == 2) {

		vongLap2();
	}
	while(k == 3) {

		vongLap3();
	}
	while(k == 0) {

		vongLap0();
	}
}
void vongLap2() {

	case2();///// khai bao case
	int k;
	do {

		printf("\nnhan phim 1 de tiep tuc chuong trinh hoac nhan phim 0 de ket thuc: \n");
		scanf("%d", &k);
	} while( k < 0 || k > 1);
	system("cls");
	while(k == 1) {
		bonus();
		do {

			printf("\nnhan phim 1 de tiep tuc chuong trinh hoac nhan phim 0 de ket thuc: \n");
			scanf("%d", &k);
		} while( k < 0 || k > 1);
		system("cls");
	}
	if(k == 0) {
		menu();
	}
	do {
		printf("Moi ban lua chon : \n");
		scanf("%d", &k);
	} while(k >3 || k < 0);
	while(k == 1) {
		vongLap1();
	}
	while(k == 2) {

		vongLap2();
	}
	while(k == 3) {

		vongLap3();
	}
	while(k == 0) {

			vongLap0();
	}


}
void vongLap3() {
	case3();
	int k;
	int s;
	do {
		printf("nhan 1 de tiep tuc chuong trinh hoac nhan 0 de thoat\n");
		scanf("%d", &k);
	} 	while(k <0 || k >1);
	system("cls");
	while(k == 1) {
		case3();
		do {
			printf("nhan 1 de tiep tuc chuong trinh hoac nhan 0 de thoat\n");
			scanf("%d", &k);
		} while(k <0 || k >1);
		system("cls");

	}

	if(k == 0) {
		menu();
	}
		do {
			printf("chon chuong trinh co trong menu\n");
			scanf("%d", &k);
		} while(k <0 || k >3);
		system("cls");
	
	while(k == 1) {
		vongLap1();
	}
	while(k == 2) {
		vongLap2();
	}
	while(k == 3) {
		vongLap3();
	}
	while(k == 0) {
		vongLap0();
	}
}

void vongLap0(){
	case0();
	
}





