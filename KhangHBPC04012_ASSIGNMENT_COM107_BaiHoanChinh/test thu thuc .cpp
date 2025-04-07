#include <stdio.h>
#include <string.h>
void input1(){
	
	char  string[20];
	printf("nhap vao chuong trinh chuoi la : \n");
	gets(string);
	printf("chuoi duoc dao nguoc la: %s", strrev(string));
	
}




int main(){

input1();

}


