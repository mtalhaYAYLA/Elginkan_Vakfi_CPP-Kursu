#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Fonksiyonlar
int varmi(int dizi[], int boyut, int aranan)
{
    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] == aranan)
        {
            return 1; // Eşleşen sayı var
        }
    }
    return 0; // Eşleşen sayı yok
}

int main()
{
    int rndS1 = 0;
    int rndS2 = 0;
    int rndS3 = 0;
    int rndS4 = 0;
    int dizi[4];
    int tahmin;
    int thmnDizi[4];
    int hak = 0;
    int artiSayi = 0;
    int eksiSayi = 0;
    bool sayiBulundu = false; // Sayı bulunduğunda true olacak değişken

    srand(time(NULL));

    rndS1 = (rand() % 10);
    rndS2 = (rand() % 10);
    rndS3 = (rand() % 10);
    rndS4 = (rand() % 10);

    // cout << rndS1 << rndS2 << rndS3 << rndS4 << endl; test amaçlı

    dizi[0] = rndS1;
    dizi[1] = rndS2;
    dizi[2] = rndS3;
    dizi[3] = rndS4;

    while (hak < 10 && !sayiBulundu)
    {
        cout << hak + 1 << ". hak Sayiyi Giriniz : ";
        cin >> tahmin;

        thmnDizi[0] = tahmin / 1000;
        thmnDizi[1] = tahmin / 100 % 10;
        thmnDizi[2] = tahmin / 10 % 10;
        thmnDizi[3] = tahmin % 10;

        artiSayi = 0;
        eksiSayi = 0;

        for (int i = 0; i < 4; i++)
        {
            if (dizi[i] == thmnDizi[i])
            {
                artiSayi++;
            }
            else if (varmi(dizi, 4, thmnDizi[i]))
            {
                eksiSayi++;
            }
        }

        cout << "-" << eksiSayi << " , +" << artiSayi << endl;

        if (artiSayi == 4)
        {
            sayiBulundu = true;
        }

        hak++;
    }

    // Oyun bittiğinde sonucu göster ve puanı hesapla
    if (sayiBulundu)
    {
        int puan = 10 * artiSayi + 5 * eksiSayi + (1.0 / hak) * 1000 - ((artiSayi + eksiSayi) * 1.0 / (artiSayi + eksiSayi + 1));
        cout << "Bravo bildiniz. Puaniniz : " << puan << endl;
    }
    else
    {
        cout << "Maalesef kaybettiniz." << endl;
    }

    return 0;
}