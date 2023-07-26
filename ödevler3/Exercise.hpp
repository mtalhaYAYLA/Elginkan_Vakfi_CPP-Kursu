#include <iostream>
#include <iomanip>

// Kullanıcıdan 3 dersin notlarını alıp, ortalamalarını hesaplayan ve ekrana yazdıran programı yazınız.
// Mete Ülken CPP Ödev 3

typedef struct notlar
{
    char dersAdi1[20] = "Matematik";
    char dersAdi2[20] = "Fizik";
    char dersAdi3[20] = "Programlama";
    int not1;
    int not2;
    int not3;
    int not4;
    int not5;
    int ortalama;
}nots;