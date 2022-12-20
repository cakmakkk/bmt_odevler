#include <stdio.h> //hocam imzaladı diye githuba atmamıstım
int main () {
 double yabancidilpuani,alespuani,mezuniyetortalamasi;
 float PUAN;

printf("yabancıdilpuani, alespuani, mezuniyetortalamasi giriniz:");
scanf("%lf" ,&yabancidilpuani);
scanf("%lf" ,&alespuani);
scanf("%lf" ,&mezuniyetortalamasi);

PUAN = (yabancidilpuani/4+alespuani/2+mezuniyetortalamasi/4);
printf("%2f",PUAN);
if (yabancidilpuani<70)

    printf("\nElendiniz.");
else
{
 if (PUAN<60)
  printf("\nGeçemediniz.");
 else 
  printf("\nGeçtiniz.");
}
return 0;
}