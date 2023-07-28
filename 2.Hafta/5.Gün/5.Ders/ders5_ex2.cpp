#include <iostream>

using namespace std;

const float PI = 3.14159;

class kure
{
    public:
        float r;

    float hacimHesapla(); // prototip
    float alan();
       
}k; // nesne listesi

float kure::hacimHesapla()  // :: scope resolution operator (kapsam çözümleme operatörü)
{
    return (4.0/3.0)*PI*r*r*r;
}

float kure::alan()  // :: scope resolution operator (kapsam çözümleme operatörü) 
{
    return 4*PI*r*r;
}

int main()
{
    //kure kure1; // nesne oluşturma
    // kure1.r = 5;
    // cout << "hacim : " << kure1.hacimHesapla() << endl; VB...

    cout << "yaricap : "; cin >> k.r;
    cout << "hacim : " << k.hacimHesapla() << endl;
    cout << "alan : " << k.alan() << endl;

    return 0;
}