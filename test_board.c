#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//ekok 

int ekok(int x, int y){
	int i=1;
	if(i%x==0 && i%y==0){
		return i;
	}
	else{
		i++;
		return ekok(x,y);
	}
}
int main(){
	int sayi1,sayi2,sonuc;
	printf("buyuk sayiyi gir:");
	scanf("%d",&sayi1);	
	printf("kucuk sayiyi gir:");
	scanf("%d",&sayi2);	
	sonuc = ekok(sayi1,sayi2);
	printf("sonuc= %d",sonuc);
	return 0;
}