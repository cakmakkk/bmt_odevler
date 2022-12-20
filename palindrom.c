#include <stdio.h> //hocam imzaladı diye githuba atmamıstım
int main () {
int sayi=12345;

 int birler, onlar, yuzler, binler, onbinler;
birler=sayi%10;
printf("birler: %d\n", birler);

onlar=(sayi%100-birler)/10;
printf("onlar: %d\n", onlar);

yuzler=(sayi%1000-onlar)/100;
printf("yuzler: %d\n", yuzler);

binler=(sayi%10000-yuzler)/1000;
printf("binler: %d\n", binler);

onbinler=(sayi%100000-binler)/10000;
printf("onbinler: %d\n", onbinler);

if(birler==onbinler && onlar==binler)
{
    printf("Palindrom.");
}
else printf("Palindrom değil.");
return 0;
}