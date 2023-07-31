// 3.Hafta Pazartesi 1  Kurucu-Yok Edici.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// s sharpta new kelimesi (yeni olusturma)

#include <iostream>

using namespace std; 

class deneme {

public:
    deneme();
    ~deneme();
   deneme(int);
    deneme(int, int);

};

deneme::deneme() 
{
    cout << "Parametresiz Kurucu Calisti" << endl;
}

deneme::~deneme()  //en son calisir
{                               
        cout << "Dest Calisti" << endl;
}

deneme::deneme(int a)
{
    cout << "Tek Parametreli Kurucu Calisti" << endl;
}

deneme::deneme(int x, int y)
{
    cout << "Iki parametreli kurucu calisti";
}


int main()
{
    deneme d;
    deneme d1(4);
    deneme d2(5, 4);
}