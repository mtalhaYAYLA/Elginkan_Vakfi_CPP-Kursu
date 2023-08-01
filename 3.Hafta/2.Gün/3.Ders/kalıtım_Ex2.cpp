#include <iostream>

using namespace std;

class Kisi  // Temal sınıf
{
public:
    string ad;
    string soyad;
    int yas;
};

class Ogrenci : public Kisi  // Ogrenci sınıfı Kisi sınıfından kalıtım aldı.
{
public:
    int numara;
    string bolum;
};

class Akademisyen : public Kisi // Akademisyen sınıfı Kisi sınıfından kalıtım aldı.
{
public:
    string unvan;
    string brans;
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    Akademisyen akademisyen1;

    akademisyen1.ad = "Muhammed Talha";
    akademisyen1.soyad = "Yayla";
    akademisyen1.yas = 22;
    akademisyen1.unvan = "Doç. Dr.";
    akademisyen1.brans = "Bilgisayar Mühendisliği";

    Ogrenci ogrenci1;

    ogrenci1.ad = "Hamza";
    ogrenci1.soyad = "Serbest";
    ogrenci1.yas = 17;
    ogrenci1.numara = 1876;
    ogrenci1.bolum = "Bilgisayar Mühendisliği";

    cout << "Akademisyen Bilgileri" << endl;
    cout << "Ad: " << akademisyen1.ad << endl;
    cout << "Soyad: " << akademisyen1.soyad << endl;
    cout << "Yaş: " << akademisyen1.yas << endl;
    cout << "Ünvan: " << akademisyen1.unvan << endl;
    cout << "Branş: " << akademisyen1.brans << endl;

    cout << "----------------------------------" << endl;

    cout << "Öğrenci Bilgileri" << endl;
    cout << "Ad: " << ogrenci1.ad << endl;
    cout << "Soyad: " << ogrenci1.soyad << endl;
    cout << "Yaş: " << ogrenci1.yas << endl;
    cout << "Numara: " << ogrenci1.numara << endl;
    cout << "Bölüm: " << ogrenci1.bolum << endl;

    return 0;
}