#include <iostream>

using namespace std;

int main()
{
    //rasgele üretilen 1 -100 arsındaki 10 adet sayıyı bir diziye atarak bunların arasında tek ve çift sayıları ayrı ayrı gösteren ve kaç adet tek kaç adet çift sayı olduğunu ekrana yazdıran program
    int sayilar[10];
    int tekSayilar[10];
    int ciftSayilar[10];
    int tekSayilarAdet = 0;
    int ciftSayilarAdet = 0;

    for (int i = 0; i < 10; i++)
    {
        sayilar[i] = rand() % 100 + 1;
        if (sayilar[i] % 2 == 0)
        {
            ciftSayilar[ciftSayilarAdet] = sayilar[i];
            ciftSayilarAdet++;
        }
        else
        {
            tekSayilar[tekSayilarAdet] = sayilar[i];
            tekSayilarAdet++;
        }
    }

    cout << "Tek sayilar: ";
    for (int i = 0; i < tekSayilarAdet; i++)
    {
        cout << tekSayilar[i] << " ";
    }
    cout << endl;

    cout << "Cift sayilar: ";
    for (int i = 0; i < ciftSayilarAdet; i++)
    {
        cout << ciftSayilar[i] << " ";
    }
    cout << endl;

    cout << "Tek sayilar adet: " << tekSayilarAdet << endl;
    cout << "Cift sayilar adet: " << ciftSayilarAdet << endl;

    return 0;
}