
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/* SERİ TOPLAM
int seritoplama(int x);
int main() 
{
    int seritoplam; 
    int x;
    printf("x degeri girin aralik belirleyecek");
    scanf("%d", &x);
    
    seritoplam=seritoplama(x);
    printf("seri toplam; %d", seritoplam);

    return 0;
}



int seritoplama(int x){
    int toplam=0;
        for(int i=1; i<=x; i++){
            toplam+=i;
        }
        return toplam;
}
*/
/* CUMLEYİ TERS YAZDİRMA
int main(){
    int i;
    int j=0;
    int sayac=0;
    char cumle[100], cumleters[sayac], sayac[100];
    printf("ters cevrilecek cumleyi giriniz \n");
    gets(cumle);
    for(i=0;i<100;i++){
        if(cumle[i]!='\0'){
            sayac++;
        } 
        puts(cumle);
    }
    printf("%d", sayac);
    for(i=sayac;i>=0;i--){
        cumle[j]=cumleters[i];
        j++;
    }

    return 0;
}

/*ust
int ust_fonk(int sayi, int ust){

 if(ust>0)
 return sayi*ust_fonk(sayi,ust-1);
else
return 1;
}
int main(){
    int sayi,ust,sonuc;

    printf("ilk sayi giriniz sonra ust giriniz");
    scanf("%d", &sayi);
    scanf("%d", &ust);
    ust_fonk(sayi,ust);
    printf("sonuc %d", ust_fonk(sayi,ust));


    return 0;
}
*/
/* FAKTORİYEL ALMA
int fakt(int sayi){
    if(sayi<=1){
    return 1;
    }
    return sayi*fakt(sayi-1);
}





int main(){
    int sayi;
    int sonuc;
    printf("sayi gir fakt alicam pozitif gir amateur quatation");
    scanf("%d", &sayi);
    sonuc=fakt(sayi);
    printf("%d", sonuc);



    return 0;
}
*/
/* EKOK ALMA
int ekok(int sayi1, int sayi2); 
int gecici=1 ;
int main(){
int sayi2,sayi1,sonuc;

printf("2 sayi giriniz ekok alicam");
scanf("%d %d", &sayi1, &sayi2);
sonuc=ekok(sayi1, sayi2);
printf("ekoklari=%d", sonuc);


    return 0;
}

ekok(int sayi1, int sayi2){
if(gecici % sayi1==0 && gecici % sayi2==0)
return gecici;
else 
gecici++;
return ekok(sayi1, sayi2);

}
*/
/*
int main(){
int i=5;
int *p= &i;
printf("%p\n", p);
printf("%d", *p);

return 0;
}
*/
/* ADRES KAYDEDİP ADRESTEKİ ÇIKTIYI ALMA POINTER
int main(){
    int a=5, *ap;
    float b=3.2, *bp;
    double c=3.423, *cp;
    char d='a', *dp;

    int sayilar[5]={1,2,3,4,5};
    int *arrayp;

    ap=&a;
    bp=&b;
    cp=&c;
    dp=&d;

    arrayp=&sayilar[1];

    printf("%p adresindeki intin degeri %d\n",ap ,*ap );
    printf("%p adresindeki floatin degeri %f\n",bp, *bp);
    printf("%p adresindeki double degeri %lf\n",cp, *cp );
    printf("%p adresindeki charin degeri %c\n",dp, *dp );
    printf("%p adresindeki dizinin degeri %d\n",arrayp, *arrayp);

    */

/* POINTER CALL BY VALUE FONKSİYON GEÇİCİ OLARAK RAMDE YER TUTAR TEMELLİ İSTİYORSAN REFERANSINA ADRESİNE GÖRE DEĞİŞTİR
    void degistir(int x, int y){
    int gecici=x;
    x=y;
    y=gecici;
    printf("%d %d\n",x,y);
    }
    int main(){
        int x=5;
        int y=10;
        degistir(x,y);
        printf("%d %d",x,y);
      

        return 0;
    }
    *//*CALL BY REFERANCE

     void degistir(int *a, int *b);
     int main(){
         int x=5;
         int y=10;
         degistir(&x,&y);
         printf("%d %d",x,y);
         return 0;
     }
     void degistir(int *a, int *b){
         int gecici;
         gecici=*a;
         *a=*b;  
         *b=gecici;
        printf("%d %d",*a,*b);
     } 
*/ /*
    int main(){
        int sayilar[5]={0,1,2,3,4};
        int *p=sayilar;
        printf("%u\n",p);
        printf("%u\n",p[1]);
        printf("%u\n",*(p+2));
        printf("%u\n",*(p+3));
    



        return 0;
    } UNUTMA NOT *(p+1)=p[1]
    */ /* STRİNGLERDE ASLINDA ADRES BELİRTİR POINTER GİBİ 
    int benimstrlen(char *p){
        int uzunluk=0;
        int i=0 ;

        for(; p[i]!='\0'; i++){
            uzunluk++;
        }
        return uzunluk;
    }

    int main(){
        char yazi[]="tura";
        char *p=yazi;
        printf("%s\n",p);
        printf("%d",benimstrlen(yazi));
        return 0;
    } 
    char dondur(char *p, int indeks){
	int uzunluk=strlen(p);
	if(indeks>uzunluk){
		return NULL;
}
	else{
		return p+indeks;
	} */
/*
int main(){
	char dizi[]="yazilim";
	char p=dondur(dizi,2);
	if(p==NULL){
		printf("NULL");
	}
	else{
		printf("%s",p);
	}
	return 0;
}double lf float p
*/ /*
int main(){
    double a=1.0;
    double b=2.0;
    double c=3.0;
    double *array_p[3]={&a,&b,&c};

    printf("address of a is %p\n", array_p[0]);
    printf("address of b is %p\n", array_p[1]);
    printf("address of c is %p\n", array_p[2]);

    for(int i=0; i<3;i++){
        printf("*array_p[%d]=%lf\n",i,*array_p[i]);
    }


return 0;
}
*/ /* İŞE YARAMADI ANLAMADIM SORUNU
void bubble(int elemansayisi,int dizi[]);
int main(){
    int i;
    int dizi[50];
    int elemansayisi;
    printf("kac elemanli");
    scanf("%d", &elemansayisi);
    for(i=0;i<elemansayisi;i++){
         printf("dizinin %d. elemanini giriniz:\n",i+1);
         scanf("%d", &dizi[i]);
    }
    bubble(elemansayisi,dizi);
    for(i=0;i<elemansayisi;i++){
        printf("%d", dizi[i]);
    }

    return 0;
}
void bubble(int elemansayisi, int dizi[]){
    int i,j,temp;
    for(i=0;i<elemansayisi;i++){
        for(j=1;j<elemansayisi-i;j++){
            if(dizi[j-1]>dizi[j])
                temp=dizi[j-1];
                dizi[j-1]=dizi[j];
                dizi[j]=temp;
        
        }

    }
    for(i=0;i<elemansayisi;i++){
        printf("%d\n",dizi[i]);
    }

} *//*CALL BY REFERENCE ADRES SWAPI 


void swap(int *a, int *b){
    int temp;
    temp=a;
    a=b;
    a=temp;
    }
int main(){
    int num1=5;
    int num2=10;
    printf("%d-%d", num1, num2);
    swap(num1, num2);
    printf("%d-%d", num1,num2);
    


    return 0;
}*/ /* (int*)malloc(sizeof(int)) free()
int main(){
        int a[5]={1,2,3,4,5};
        for(int i=0;i<5;i++){
            printf("%d",a[i]);
        }
        int *b=(int *)malloc(sizeof(int)*5);
        b[1]=10;
        b[2]=12;
        *(b+3)=15;
        *(b+4)=20;
        *(b+5)=30;
        for(int i=0;i<5;i++){
            printf("%d\n",b[i]);

        }
        free(b);
    return 0;
} */ /*
void mystrcpy(char str1[], char str2[],int n){
	int i,j;
	for(i=0;i<n;i++){
		str1[i]=str2[i];
	}
	i++;
	str1[i]='\0';
}


int main(){
	char name1[20],name2[20];
	printf("isim1:");
	gets(name1);
	printf("isim2:");
	gets(name2);
	mystrcpy(name1,name2,3);
	printf("sonuc: %s",name1);
	return 0;
}
*/ /*
    void getcube(int *num1){
        *num1=(*num1)*(*num1)*(*num1);
    }
	int main(){
        int *num1;
        int a;                                      
        printf("write a number: ");                     
        scanf("%d", &num1);
        getcube(&num1);
        printf("cube of the number you have given: %d", num1);
	return 0;
}
*/ /*
void mystrcat(char a[], char b[]){
    int i=0;
    int n;
    int c;
    c=strlen(a);
    for(n=0;n<100;n++,c++){
        a[c]=b[n];
    }
    }
int main(){
    char a[20], b[20];
    printf("iki string gir ikincisini birincisinin sonuna yapistiracagim contemtates");
    gets(a);
    gets(b);
    mystrcat(a,b);
    puts(a);
	return 0;
} */ /*
void lowercase(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++){
        a[i]+='G'-'g';
    }
    return;
    
}
int main(){
    char a[7]="ATAKAN";
    lowercase(a);
    puts(a);
 
    return 0;
} */
 /*void lowercase(char a[]){
    int b,d;
    if(a[0]=='\0'){
    return;
    }
    else 
    a[0]+='A'-'a';
    return lowercase(a+1);
 }
int main(){
    char a[100]="atakan";
    int i;
    lowercase(a,i);
    puts(a);
    return 0;
}*/
#include<stdio.h>
int main(){
	int a;
    int b;
	a=5;
	b=a;
	printf("%d %d", a,b);

	return 0;
}
