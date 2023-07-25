#include <iostream>

using namespace std;

int main()
{
//! Gidilen km'ye göre ücret hesaplaması yapan programı yazınız.
//* ilk 100 km'ye kadar 0.5 TL/km
//* 100 km'den sonra 0.2 TL/km
//* örn: Gidilen KM'yi giriniz: 80
//* örn: Toplam Ucret= 40TL

    int km = 0, hesapla = 0;
    cout << "Gidilen KM'yi giriniz: ";
    cin >> km;
    if(km > 100)
    {
        hesapla = km * 0.2;
    }
    else
    {
        hesapla = km * 0.5;
    }
    cout << "Toplam Ucret= " << hesapla << "TL" << endl;

}