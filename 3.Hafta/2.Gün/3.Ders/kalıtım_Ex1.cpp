#include <iostream>

using namespace std;

class sinifA
{
    int degerA;
public:
    int pub()
    {
        return degerA = 567;
    } 
    // sinifA(int a) : degerA(a) {}  // Yapıcı fonksiyon (Constructor) bunu araştır.
    // void yaz()
    // {
    //     cout << "Deger A: " << degerA << endl;
    // }
};

class sinifB : public sinifA
{
    int degerB;
public:
    int f1()
    {
        return degerB = 123;
    }
};

int main()
{
    int aa, bb;

    sinifB nesneB;  // Nesne oluşturuldu.
    
    aa = nesneB.pub(); // Nesne üzerinden üst sınıfın public elemanlarına erişildi.

    bb = nesneB.f1(); // Nesne üzerinden türetilmiş alt sınıfın public elemanlarına erişildi.

    cout << "Temal Siniftan Gelen : " << aa << endl;
    cout << "Türetilmis Alt Siniftan Gelen : " << bb << endl;

    return 0;
}




