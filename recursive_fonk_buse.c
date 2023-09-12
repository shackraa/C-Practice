#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//faktoriyel bulma
/*
int fonk(int x){
	if(x<=1){
		return 1;
	}
	return x*(fonk(x-1));
}

int main(int argc, char *argv[]) {
int x;
printf("sayi gir:");
scanf("%d",&x);
printf("faktoriyel = %d",fonk(x));		
	return 0;
}
*/
////////////////////////////////////////////////////////////////////
//girilen sayiya kadarolan sayıları gösterne program
/*
int fonk(int x){
	if(x<=1){
		return 1;
}
	printf("%d   ",x);
	return fonk(x-1);
}
int main(){
	int x;
	puts("sayi gir");
	scanf("%d",&x);
	printf("%d",fonk(x));
	return 0;
	
}	
/////////////////////////////////////////////////////////////////////////
*/	
//girilen sayıya kadar olan sayıların toplamını veren program
/*
int fonk(int x){
	int toplam=0;
	if(x<=1){
		return 1;
	}
	toplam+=x;
	printf("%d",toplam);
	return fonk(x-1);
}
int main(){
	int x;
	puts("sayi gir");
	scanf("%d",&x);
	printf("%d",fonk(x));
	return 0;
	
}	
*/
//////////////////////////////////////////////////////////////////////////
//fibonacci
/*
int fonk(int x){
	if(x==0){
		return 0;
	}
	else if (x==1){
		return 1;
	}
	return fonk(x-1)+fonk(x-2);
}

int main(){
	int sayi = 1;
    int sonuc = fonk(sayi);
    printf("Fib%d = %d\n", sayi, sonuc);
    return 0;
	
}

*/
/////////////////////////////////////////////////////////////////////////
/*
void fonk(int k){
	printf("k=%d/n",k);
	k++;
	if(k>3){
		return;
	}
	fonk(k);
	printf("1. fonk cagırmadan gelen fonk/n");
	fonk(k);
	printf("2. fonk cagırmadan gelen fonk/n");	
}
int main(){
	int n=1;
	fonk(n);
	printf("mainden gelen fonk/n");
	getch();
	return 0;
}
*/
/////////////////////////////////////////////////////////////////////
//us alma
/*
int fonk(int taban, int us){
	if(us=0){
		return 1;
	}
	return taban*fonk(taban,us-1);

}
int main(){
	int us=3;
	int taban=4;
	int sonuc;
	sonuc=fonk(taban,us);
	printf("sonuc= %d",sonuc);
	return 0;
}

*/
/////////////////////////////////////////////////////
//carpma islemi
/*
int main(){
	int sayi1=4;
	int sayi2=3;
	int sonuc;
	sonuc=carp(sayi1,sayi2);
	printf("sonuc= %d",sonuc);
	return 0;
}
int carp(int x, int y){
	if(y==0){
		return 0;
	}
	return x+carp(x,y-1);
}
*/
////////////////////////////////////////////////////////////////////////////////////
//bolme islemi
/*
int main(){
	int sayi1=100;
	int sayi2=10;
	int sonuc;
	sonuc=fonk(sayi1,sayi2);
	printf("sonuc= %d",sonuc);
	return 0;
}
int fonk(int x, int y){
	if(y==0){
		return 0;
	}
	else if(x==y){
		return 1;
	}
	else if(x<y=0){
		return 0;
	}
	return 1 + fonk(x-y,y);
}	
*/
///////////////////////////////////////////////////////////////////777
// asal sayı kontrolü
/*	
int main(){
	int sayi1,sayi2;
	printf("sayi gir:");
	scanf("%d",&sayi1);
	sayi2=sayi1/2;
	if(fonk(sayi1,sayi2)==0){
		printf("asal degil");
	}
	else{
		printf("asal");
	}
	return 0;
}
int fonk(int x,int y){
	if(x<2){
		return 0;
	}
	else if(y==1){
		return 1;
	}
	else if(x%y==0){
		return 0;
	}
	return fonk(x,y-1);
}

*/
//////////////////////////////////////////////////////////////////////
//OBEB Ornegi
int main(){
	int sayi1=7;
	int sayi2=48;
	int sonuc=ebob(sayi1,sayi2);
	printf("sonuc=%d",sonuc);
	return 0;
}
int ebob(int x,int y){
/*
	if(x==y){
		return x;
	}
	else if(x>y){
		return(x-y,y);
	}
	else if(x<y){
		return(x,y-x);
	}
	else{
		return 1;
	}
*/	
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}