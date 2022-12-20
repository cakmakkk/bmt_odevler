#include <stdio.h> //hocam imzaladı diye atmamıştım githuba.

void ortsirala(float dizi[5])
{
float temp;
for(int i=0;i<4;i++)
{
    for(int j=j+1;j<5;j++)
    {
        if(dizi[j]<dizi[i]){
            temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
        }
    }
}


}


void vizesirala(float dizi[5])
{
float temp;
for(int i=0;i<4;i++)
{
    for(int j=j+1;j<5;j++)
    {
        if(dizi[j]<dizi[i]){
            temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
        }
    }
}

}


int main () {

float dizi[5];
for (int i=0;i<5;i++)
{
    scanf("%f\n",&dizi[i]);
} 

ortsirala(dizi);
for(int i=0;i<5;i++)
{
    printf("%.2f\t\n",dizi[i]);
}

for (int i=0;i<5;i++)
{
    scanf("%f\n",&dizi[i]);
} 



vizesirala(dizi);
for(int i=0;i<5;i++)
{
    printf("%.2f\t",dizi[i]);
}
for (int i=0;i<5;i++)
{
    scanf("%f\n",&dizi[i]);
} 

}