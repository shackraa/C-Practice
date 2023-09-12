#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
/*
// file da struct kullanımı
typedef struct{
    char *mekan;
    int zaman;
}git;
int main(){
    git git ={"almanya",14};
    char *satir=("selam");
    FILE *fp;
    fp=fopen("final dosya.txt", "w");
    if(fp==NULL){
         puts("dosya acilmadı");
    }
    else{
        printf("dosya acildi!");
        fprintf(fp,"%s %d", git.mekan, git.zaman);
     }
  
    fclose(fp);
	return 0;
}
 */ /*
typedef struct{
    char *mekan;
    int zaman;
}yapi;
int main(){
    int i=0;
    yapi nesne4 ={"almanya",14};
    yapi nesne1 ={"fransa", 15};
    yapi nesne2 ={"italya", 16};
    yapi nesne3 ={"ispanya", 17};
    yapi nesneler[4]={nesne1, nesne2, nesne3, nesne4};
    char *satir=("selam");
    FILE *fp;
    fp=fopen("final dosya.txt", "w");
    if(fp==NULL){
         puts("dosya acilmadı");
    }
    else{
        printf("dosya acildi!");
        while(i<4){
        fprintf(fp,"%s %d", nesneler[i].mekan, nesneler[i].zaman);
        i++;
        }
     }
  
    fclose(fp);
	return 0;
}
*/ /*
int main(){
        FILE *fp;
        char s[50];
        int i=0;
        fp=fopen("sample.txt","w");
        if(fp==NULL){
            printf("file acilamadi");
            exit(1);
        }
    else{
        while(i<4){
        printf("string girin not defterine gitsin o degerler i.string");
        gets(s);
        fprintf(fp,"%s\n", s);
        i++;
        } 
    }
    return 0;
}
*/ /*
int main(){
    char ch;
    int i;
    FILE *dosya;
    dosya=fopen("sample.txt","r");
    if(dosya==NULL){
        printf("dosya acilamadi");
        exit(1);
    }
    i=ftell(dosya);
    ch=fgetc(dosya);
    while(!feof(dosya)){
        printf("%d---->%c\n",i,ch);
        i=ftell(dosya);
        ch=fgetc(dosya);
        if(ch==EOF){
            printf("%d-->%c",i,ch);
        }
        

    }
    fclose(dosya);

    return 0;
}*/
int main(){
    char ch;
    int i;
    FILE *dosya;
    dosya=fopen("sample.txt","r");
    if(dosya==NULL){
        puts("dosya acilamadi");
        exit(1);
    }
    fseek(dosya,0,SEEK_END);
    printf("datanin boyutu %d\n", ftell(dosya));
    fseek(dosya,-1,SEEK_CUR);
    printf("datanin gosterdigi yer %c", fgetc(dosya));
    fseek(dosya,4,SEEK_SET);
    printf("datanin gosterdigi yer %c", fgetc(dosya)); 
    return 0;
}