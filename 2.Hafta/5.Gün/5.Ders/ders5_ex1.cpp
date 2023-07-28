#include <iostream>

using namespace std;

const float PI = 3.14159;

class kure
{
    public:
        float r;

        float hacimHesapla()
        {
            return (4.0/3.0)*PI*r*r*r;
        }
        float alan()
        {
            return 4*PI*r*r;
        }
}k; // nesne listesi

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