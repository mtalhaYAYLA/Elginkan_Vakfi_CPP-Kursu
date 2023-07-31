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
    bool sayiBulundu = false; // Sayı bulunduğunda true olacak değişken

    srand(time(NULL));

    rndS1 = (rand() % 10);
    rndS2 = (rand() % 10);
    rndS3 = (rand() % 10);
    rndS4 = (rand() % 10);

    dizi[0] = rndS1;
    dizi[1] = rndS2;
    dizi[2] = rndS3;
    dizi[3] = rndS4;

    //cout << rndS1 << rndS2 << rndS3 << rndS4 << endl; // Test için  yazıldı ;)

    while (hak < 10 && !sayiBulundu)
    {
        cout << "Tahmininizi giriniz: ";
        cin >> tahmin;

        thmnDizi[0] = tahmin / 1000;
        thmnDizi[1] = tahmin / 100 % 10;
        thmnDizi[2] = tahmin / 10 % 10;
        thmnDizi[3] = tahmin % 10;

        int dogruYer = 0;
        int yanlisYer = 0;

        for (int i = 0; i < 4; i++)
        {
            if (dizi[i] == thmnDizi[i])
            {
                dogruYer++;
            }
            else if (varmi(dizi, 4, thmnDizi[i]))
            {
                yanlisYer++;
            }
        }

        cout << "-> -" << yanlisYer << " , +" << dogruYer << endl;

        if (dogruYer == 4)
        {
            sayiBulundu = true;
        }

        hak++;
    }

    // Oyun bittiğinde sonucu göster
    if (sayiBulundu)
    {
        cout << "Tebrikler, sayiyi buldunuz!" << endl;
        int puan = 10 - hak + 1;
        cout << "Puaniniz: " << puan << endl;
    }
    else
    {
        cout << "Maalesef, sayiyi bulamadiniz." << endl;
        cout << "Puaniniz: 0" << endl;
    }

    return 0;
}