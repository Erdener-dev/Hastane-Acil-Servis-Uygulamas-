#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Hasta_kayit{
int Kimlik[11];
char Hasta_adi_soyadi[50];
char Hasta_cinsiyeti[50];
int Hasta_yasi;
char Hasta_sikayeti[100];
}Hasta;



int main()
{
int Sari_hasta_sayaci=300,Yesil_hasta_sayaci=1;
int sonuc;
int kritik=1;
int orta=2;
int iyi=3;
while(1){printf("Hastanin oncelikle triyaja gittigini kontrol ediniz.\n");
printf("\nTriyajdan gelen sonuca gore hasta kritik(1) ,orta(2) ,iyi(3)  hangisi ? \n");
scanf("%d",&sonuc);
while(sonuc>3||sonuc<1){
printf("Gecersiz giris lutfen hastanin durumuna gore 1,2 veya 3 giriniz.\n");
scanf("%d",&sonuc);
}


printf("\n");
printf("\n");



if(sonuc==3)
{
    printf("Hasta durumu acil degil,yesil alana yonlendiriniz.\n");
}
else if(sonuc==2)
{
    printf("Hasta durumu orta oncelikte,sari alana yonlendiriniz.\n");
}
else
{
    printf("Hasta durumu kritik oncelikte,kirmizi alana yonlendiriniz.\n");
}
printf("\n");

printf("\nHastanin durumu belirlendi lutfen hasta kayit islemi yapiniz.\n");
printf("\n");


Hasta h1;
getchar();
printf("Hastanin kimligi :\n");
fgets(h1.Kimlik,sizeof(h1.Kimlik),stdin);


printf("Hastanin adi ve soyadi:\n");
fgets(h1.Hasta_adi_soyadi,sizeof(h1.Hasta_adi_soyadi),stdin);


printf("Hastanin yasi:\n");
scanf("%d",&h1.Hasta_yasi);


printf("Hastanin cinsiyeti:\n");
scanf("%s",&h1.Hasta_cinsiyeti);


getchar();

printf("Hastanin sikayeti:\n");
fgets(h1.Hasta_sikayeti,sizeof(h1.Hasta_sikayeti),stdin);



printf("\n");
printf("\n");
printf("\n");

srand(time(0));

if(sonuc==3)
{
printf("Sira numaraniz: %d\n",Yesil_hasta_sayaci);
printf("Recete no: %d\n",(rand()%90000)+10000);
Yesil_hasta_sayaci++;
printf("\n");
printf("\n");
}


else if(sonuc==2)
{
printf("Sira numaraniz: %d\n",Sari_hasta_sayaci);
printf("Recete no: %d\n",(rand()%90000)+10000);
Sari_hasta_sayaci++;
printf("\n");
printf("\n");


}

else if(sonuc==1)
{
printf("Hastanizin durumu acil sira beklenmeden mudahele gerek!!!\n");

printf("\n");
printf("\n");
}
char devam;
printf("\nBaska bir hasta eklemek istiyor musunuz? (Evet(E veya e)/Hayir(H veya h):\n");
scanf(" %c", &devam);
if (devam == 'H' || devam == 'h') {
    printf("Programdan cikiliyor...\n");
    break;

}

}
}
