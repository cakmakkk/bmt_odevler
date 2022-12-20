#include <stdio.h> //HOCAM İMZALADI DİYE GİTHUBA ATMAMISTIM
int main () {
int yas;
float boy,kilo,vki;


printf("yasinizi giriniz:");
scanf("%d",&yas);

if (yas<13 || yas>17)
   {
     printf("Elendiniz.");
   }
else {
 
     printf("kilonuzu giriniz:\n");
     scanf("%f",&kilo);
     printf("boyunuzu metre cinsinden giriniz:\n");
     scanf("%f",&boy);

vki = (kilo/(boy*boy));
 printf("%.2f\n",vki); 
 if (vki<13.50 || vki>24.99)
 {
    printf("Elendinizz");
 }
 else 
 {
  printf("geçtiniz.");
  }
}
return 0;
}