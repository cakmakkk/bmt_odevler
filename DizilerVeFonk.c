#include <stdio.h>

float ortbul(int dolas[])
{
    int toplam=0;

    for(int i=0;i<5;i++)
    {
        toplam+=dolas[i];
    }
    float ort=toplam/5.0;
    return ort;

}

int kackez(int dizi[], int aranan)
{
    int sayac=0;
        for(int i=0;i<5;i++)
    {
       if(dizi[i]==aranan)
       {
        ++sayac;
       }
    }    
return sayac;

}

int maxsayi(int dizi[])
{
    int max=0, i=0;
    max =dizi[i];
for(int i=0;i<5;i++)
{
    if(dizi[i] > max)
    {
        max=dizi[i];
    }
}
return max;

}

int minbul(int dizi[])
{
    int min=0,i=0;
min=dizi[i];
for(int i=0;i<5;i++)
{
    if(dizi[i] < min){
        min=dizi[i];
    }
}

return min;

}

int ortbykadet(int dizi[],int sayac)
{
    sayac=0;
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta)
        {
        ++sayac;
        }
return sayac;
}


int ikinc(int dizi[], int iki, int max)
{
max = dizi[0];
iki = dizi[1];
for(int i=0;i<5;i++)
{
    if(dizi[i] > max)
    {
        iki=max;
        max=dizi[i];
    } else if(dizi[i]>iki && dizi[i]<max)
    {
        iki=dizi[i];
    }
}
return iki;
}

int orttankck(int dizi[])
 {
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]<orta)
            printf("%d\t",dizi[i]);
    
  } 


int orttanbyk(int dizi[])
 {
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta)
            printf("%d\t",dizi[i]);
    
  } 

int orttanbyktop(int dizi[],int toplam)
 {
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta)
           toplam+=dizi[i];
       
    return toplam;
  } 

int orttanbykort(int dizi[],int toport)
 {
 float orta=0;
   for(int i=0;i<5;i++) 
   orta+=dizi[i];
   orta=orta/5;
 
    for(int i=0;i<5;i++) 
        if(dizi[i]>orta) {
           toport+=dizi[i];
           toport=toport/2;
   }
   return toport;
  } 

int main () {
    int max,min,iki,a,sayac,toplam,toport;
 int dizi[5];
 for(int i=0;i<5;i++)
 {
    printf("%d. sayi giriniz:", (i+1));
    scanf("%d",&dizi[i]);
 }

float ort=ortbul(dizi);
printf("%.2f\n", ort);

printf("%d adet\n", kackez(dizi, 12));

printf("%d en buyuk degerdir\n", maxsayi(dizi));

printf("%d en kucuk degerdir\n", minbul(dizi));

printf("%d orttan buyuk sayi adedidir\n", ortbykadet(dizi, sayac));

printf("%d ikinci enb degerdir\n", ikinc(dizi, iki, max));

orttankck(dizi);
printf("orttan kucuk sayilardir\n");

orttanbyk(dizi);
printf("orttan buyuk sayilardir\n");

printf("%d orttan buyuk sayiların toplamı\n", orttanbyktop(dizi, toplam));

printf("%d orttan buyuk sayiların ortalamasi", orttanbykort(dizi, toport));


    return 0;
}