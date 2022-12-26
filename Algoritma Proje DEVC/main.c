#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void GirisEkran();
void SiparisEkran();
void OdemeEkran();



int main() {
	
	GirisEkran();
	SiparisEkran();
	
	printf("-------------------------------------\n---------------------------------------\n");
   
	OdemeEkran();
	
	
	
	
	
	
	
	
	
	return 0;
}

void GirisEkran()
 {
     
    char isim[30];
    printf("Sistemimize Hosgeldiniz.Adinizi giriniz. \n");
    
    scanf("%s",&isim);
    
    printf("Tekrardan hosgeldiniz %s. Siparis edilebilir kahve seceneklerimiz fiyatlari ile asagida mevcuttur. \n",isim);
    printf("------------------------------ \n Espresso=15tl \n Filtre Kahve=18tl \n Mocha=28tl \n Latte=30tl \n Americano=25tl \n Macchiato=35tl \n ------------------------------ \n ");
    
}

void SiparisEkran()

	{
	
	while(1)
	{
	
	int x; 
	printf("Siparisiniz icin tuslayin.\n Espresso icin 1 \n Filtre Kahve icin 2 \n Mocha icin 3 \n Latte icin 4 \n Americano icin 5 \n Macchiato icin 6 \n");
	scanf("%d",&x);
	
	
	if(x==1)
	{
	
	printf("Espresso secildi.Odeme ekranina yonlendiriliyor.\n");
	break;
	
	}



	else if(x==2)
	
	{
	
	printf("Filtre kahve secildi.Odeme ekranina yonlendiriliyor.\n");
	break;
	
}
	else if(x==3)
	
	{
	
    printf("Mocha secildi.Odeme ekranina yonlendiriliyor.\n");
	break;
}
	else if(x==4)
	{
	
	printf("Latte secildi.Odeme ekranina yonlendiriliyor.\n");
	break;
}
	else if(x==5)
	{
	
	printf("Americano secildi.Odeme ekranina yonlendiriliyor.\n");
	break;
}
	else if(x==6)
{
		
	printf("Macchiato secildi.Odeme ekranina yonlendiriliyor.\n");
	break;
}
	else
	{
	
	printf("Hatali tuslama yaptiniz.Tekrar deneyin.\n");
	
}

	
	
}

}

void OdemeEkran()
{

int y;
char adres[100];
int kart;
int telno;
printf("Odeme yontemi icin tuslayin.\n Online icin 1 \n Kapida Odeme icin 2 \n");
scanf("%d",&y);

while(1)
{

if(y==1)
{
	printf("Online odeme secildi.Adres,Kart Bilgilerini ve telefon numaranizi sirasiyla giriniz.\n");
	scanf("%s",&adres);
	printf("Kart bilgilerini giriniz.\n");
	scanf("%d",&kart);
	printf("Tel no giriniz.\n");
	scanf("%d",&telno);
	printf("Odeme alinip siparisiniz yola ciktiginda size sms ile bilgi verilecektir.Iyi gunler.\n");
	break;
}

else if(y==2)
{
	
	printf("Kapida odeme secildi. Adres ve telefon numarasi sirasiyla giriniz giriniz.\n");
	scanf("%s",&adres);
	printf("Tel no giriniz.\n");
	scanf("%d",&telno);
	printf("Siparisiniz yola ciktiginda size sms ile bilgi verilecektir.Iyi gunler.\n");
	break;
}

else 
{
	
	printf("Hatali giris yaptiniz. Tekrar tuslayin. \n");
	
	
	
}


}


}





