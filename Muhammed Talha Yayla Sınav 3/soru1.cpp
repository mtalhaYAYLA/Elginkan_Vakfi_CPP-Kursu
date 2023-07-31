#include <iostream>

using namespace std;

int main()
{
    // kılavyeden girilen sayı miktarına göre yine kılavyeden girilen sayıların ortalamasını hesaplayan program
    int sayi, sayac = 0, toplam = 0;
    float ortalama;

    cout << "Kac adet sayi gireceksiniz: ";
    cin >> sayi;

    while (sayac < sayi)
    {
        int girilenSayi;
        cout << "Sayi giriniz: ";
        cin >> girilenSayi;
        toplam += girilenSayi;
        sayac++;
    }

    ortalama = (float)toplam / sayi;
    cout << "Girilen sayilarin ortalamasi: " << ortalama << endl;

    return 0;
}