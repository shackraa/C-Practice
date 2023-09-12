#include <stdio.h>
#include <string.h>
/* STRUCT ORNEGI
struct student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
	
};
int main() {
	struct student buse={"Buse","Vardar",20052024,21};
	printf("%s %s %d %d", buse.isim,buse.soyisim,buse.numara,buse.yas);


	return 0;
} */
/* STRUCT FARKLI BİR TÜR EŞİTLEME
struct araba{
	int tekerleksayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;


}araba2;
	int main(){
		struct araba araba1={0};
		araba2=araba1;
		printf("%d %d %d %f %d", araba2.tekerleksayisi, araba2.vitessayisi,araba2.model,araba2.motor,araba2.beygir);
		

		return 0;
	}*//* İÇ İÇE STRUCT
	struct Address{
		char mahalle[15];
		char cadde[15];
		char sokak[15];

	};
	struct ogrenci{
		char isim[15];
		char soyad[15];
		int numara;
		int yas;
		struct Address adres; 
	};

	int main(){
		struct ogrenci ogrenci1;
		strcpy(ogrenci1.isim,"Buse");
		strcpy(ogrenci1.soyad,"Vardar");
		ogrenci1.numara=20052024;
		ogrenci1.yas=21;
		strcpy(ogrenci1.adres.mahalle,"bahcelievler");
		strcpy(ogrenci1.adres.mahalle,"7.cad");
		strcpy(ogrenci1.adres.mahalle,"1032 sok.");	
	//devamı kolay ve uzun gerek yok




		return 0;
}*/
	int main(){


		return 0;
	}