#include <iostream>

using namespace std;

class standart
{
    protected:
    int odaucreti, tvucret, odaservis, alakartucret, gunsayisi, susporlari;

    float toplamucret;

    public:
    standart()
    {
        cout << "--------Otel Ucret Hesaplamasi--------" << endl;
    }
    void ucrethesapla()
    {
        toplamucret = (odaucreti + tvucret + alakartucret) * gunsayisi;
    }

    void goruntule()
    {
        cout << "Standart oda icin toplam odenecek tutar: " << toplamucret << endl;
    }
    void setUcret()
    {
        cout << "Oda ucreti: "; cin >> odaucreti;
        cout << "TV ucreti: "; cin >> tvucret;
        cout << "Alakart ucreti: "; cin >> alakartucret;
        cout << "Gun sayisi: "; cin >> gunsayisi;
    }
};

int main()
{
    standart oda1;
    oda1.setUcret();
    oda1.ucrethesapla();
    oda1.goruntule();
    return 0;
}