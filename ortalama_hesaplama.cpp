//Dersten geçme notu 49.5 olan Trakya Üniversitesi'nde, 
//vize(%30) ve final(%70) ortalamasýný hesaplayýp,
//dersten geçip geçmediðinizi gösteren program:

#include <stdio.h>
int main (){
	
float vize;
float final;
float ortalama=0;
float dersincandegeri;

printf("Vize notunuzu giriniz: ");
scanf("%f",&vize);
printf("Final notunuzu giriniz: ");
scanf("%f",&final);

ortalama=vize*30/100+final*70/100;

printf("\nOrtalamaniz: %f\n",ortalama);

dersincandegeri=49.5;

if(ortalama>=dersincandegeri)
printf("\nDERSTEN GECTIN AFFERIM");

else
printf("\nKALDIN KANKA BUTE GIR");
}

