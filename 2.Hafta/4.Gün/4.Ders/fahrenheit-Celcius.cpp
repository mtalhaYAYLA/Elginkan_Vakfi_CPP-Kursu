#include <iostream>

using namespace std;

float fahrenaytGirdi();
float celciusGirdi();
float fahrenaytCevir(float fahrenayt);
float celciusCevir(float celcius);
void yazdir(float fahrenayt, float celcius);

int main()
{
    float fahrenayt, celcius;
    int secim;
    cout << "1. Fahrenayt -> Celcius" << endl;
    cout << "2. Celcius -> Fahrenayt" << endl;
    cout << "Seciminizi giriniz: ";
    cin >> secim;
    if (secim == 1)
    {
        fahrenayt = fahrenaytGirdi();
        celcius = fahrenaytCevir(fahrenayt);
    }
    else if (secim == 2)
    {
        celcius = celciusGirdi();
        fahrenayt = celciusCevir(celcius);
    }
    else
    {
        cout << "Hatali secim!" << endl;
        return 1;
    }
    yazdir(fahrenayt, celcius);
    return 0;
}

float fahrenaytGirdi()
{
    float fahrenayt;
    cout << "Fahrenayt degerini giriniz: ";
    cin >> fahrenayt;
    return fahrenayt;
}
float celciusGirdi()
{
    float celcius;
    cout << "Celcius degerini giriniz: ";
    cin >> celcius;
    return celcius;
}

float fahrenaytCevir(float fahrenayt)
{
    float celcius = (fahrenayt - 32) * 5 / 9;
    return celcius;
}
float celciusCevir(float celcius)
{
    float fahrenayt = celcius * 9 / 5 + 32;
    return fahrenayt;
}

void yazdir(float fahrenayt, float celcius)
{
    cout <<"----------------------------------" << endl;
    cout <<"--------" << endl;
    cout << "Sonuclar: " << endl;
    cout <<"--------" << endl;
    cout << "Celcius degeri: " << celcius << endl;
    cout <<"--------" << endl;
    cout << "Fahrenayt degeri: " << fahrenayt << endl;
    cout <<"--------" << endl;
    cout <<"----------------------------------" << endl; 
}