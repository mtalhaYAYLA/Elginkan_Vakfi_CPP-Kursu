#include <iostream>

using namespace std;

// class sınıf_adi
// {
//     private:   // gizli kısım

//     public:   // açık kısım

//     protected:  // korumalı kısım

// }; nesne listesi

class kisi
{
    public:
        string adi, soyadi;
    private:
        int yas;
};

int main()
{
    kisi kisi1;

    cout << "adi : "; cin >> kisi1.adi;
    cout << "soyadi : "; cin >> kisi1.soyadi;

   // cout <<"yas : "; cin >> kisi1.yas; // hata verir "private

    cout << "----------------------------------";
    cout << endl << "-----kisi bilgileri-----" << endl;
    cout << "adi : " << kisi1.adi << endl;
    cout << "soyadi : " << kisi1.soyadi << endl;
}