#include <iostream>

using namespace std;

float dortislem(int ,char , int);
float toplama(int, int);
float cikarma(int, int);
float carpma(int, int);
int bolme(int, int);

int main()
{
    int sayi1, sayi2;
    char islem;
    float sonuc;

    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;
    cout << "+ - * / Islemi giriniz: ";
    cin >> islem;
    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    sonuc = dortislem(sayi1, islem, sayi2);
    cout << "Sonuc: " << sonuc << endl;

    return 0;
}

float dortislem(int sayi1, char islem, int sayi2)
{
    float sonuc;
    switch (islem)
    {
    case '+':
        sonuc = toplama(sayi1, sayi2);
        break;
    case '-':
        sonuc = cikarma(sayi1, sayi2);
        break;
    case '*':
        sonuc = carpma(sayi1, sayi2);
        break;
    case '/':
        sonuc = (float)bolme(sayi1, sayi2);
        break;
    default:
        cout << "Hatali islem girdiniz." << endl;
        break;
    }
    return sonuc;
}

float toplama(int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}

float cikarma(int sayi1, int sayi2)
{
    return sayi1 - sayi2;
}

float carpma(int sayi1, int sayi2)
{
    return sayi1 * sayi2;
}

int bolme(int sayi1, int sayi2)
{
    return sayi1 / sayi2;
}
