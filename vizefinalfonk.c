#include <stdio.h>


void getortbul(float ort[5]) {
    int toplam[5];
    float vize[5];
    float final[5];
    int i;
    float temp;
    printf("ogrencinin vize notunu giriniz:\n");
for(i=0;i<5;i++)
{
    printf("ogrencinin numarasi %d",i+1);
    printf("ogrencinin vizesi:");
    scanf("%f",&vize[i]);
}

printf("ogrencinin final notunu giriniz:\n");
for(i=0;i<5;i++)
{
    printf("ogrencinin numarasi %d",i+1);
    printf("ogrencinin vizesi:");
    scanf("%f",&final[i]);
}


for(i=0;i<5;i++)
{
    toplam[i] = vize[i]+final[i];
    ort[i]=toplam[i]/2;
    printf("ogrenci no %d, ort %.2f\n",i+1, ort[i]);

      
}
  
   
}


int main() {
float vize[5];
float final[5];
float toplam[5];
float ort[5];
float temp;
int i;


getortbul(ort);


return 0;
}