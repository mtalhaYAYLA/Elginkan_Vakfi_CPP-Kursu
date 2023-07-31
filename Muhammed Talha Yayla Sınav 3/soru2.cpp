#include <iostream>

using namespace std;

int main()
{
    //bir yolda seyir halinde olan otomabiller, kamyonetler ve otobusler vardır.Araçların hız limitlerine uyup uymadıklarını kontrol eden 
    //1-otomobil 82 2-kamyonet 50 3-otobus 70 .
    //kullanıcıdan aracın türünü 1,2,3 şeklinde ve hız bilgisini alıp hız limitine uyup uymadığını ekrana yazdıran program

    int aracTuru, hiz;

    cout << "Aracin turunu giriniz: (1-otomobil , 2-kamyonet , 3-otobus))";
    cin >> aracTuru;

    cout << "Aracin hizini giriniz: ";
    cin >> hiz;

    if (aracTuru == 1)
    {
        if (hiz > 82)
        {
            cout << "Hiz limitini astiniz!" << endl;
        }
        else
        {
            cout << "Hiz limitini asmadiniz!" << endl;
        }
    }
    else if (aracTuru == 2)
    {
        if (hiz > 50)
        {
            cout << "Hiz limitini astiniz!" << endl;
        }
        else
        {
            cout << "Hiz limitini asmadiniz!" << endl;
        }
    }
    else if (aracTuru == 3)
    {
        if (hiz > 70)
        {
            cout << "Hiz limitini astiniz!" << endl;
        }
        else
        {
            cout << "Hiz limitini asmadiniz!" << endl;
        }
    }
    else
    {
        cout << "Hatali giris yaptiniz!" << endl;
    }

    return 0;
}