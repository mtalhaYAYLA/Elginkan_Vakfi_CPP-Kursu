#include "Exercise.hpp"

using namespace std;


// Kullanıcıdan 3 dersin notlarını alıp, ortalamalarını hesaplayan ve ekrana yazdıran programı yazınız.
// Mete Ülken CPP Ödev 3

int main()
{
    nots mat;
    nots fizik;
    nots programlama;
    int secim = 0;
    notlar ders;
    char notx = '-';
    char secim2 = 'e';
    char secim3 = 'e';

    cout << setw(88) << setfill('-') << " " << endl;
    cout << "|" << setw(9) << setfill(' ') << "Dersler "<< setw(5) << setfill(' ') << "|" << setfill(' ') << setw(9) << "1. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "2. Not" << setw(3) << "|" << setw(9) << setfill(' ') <<  "3. Not" << setw(3) << "|" << setw(9) << setfill(' ') << "4. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "5. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "Ortalama" << setw(3) <<  "|" << endl;
    cout << setw(88) << setfill('-') << " " << endl;
    cout << "|" << setw(10) << setfill(' ') << ders.dersAdi1 << setw(4) << "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) << "|" << setw(6) << setfill(' ') << notx << setw(6) << "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << endl;
    cout << setw(88) << setfill('-') << " " << endl;
    cout << "|" << setw(6) << setfill(' ') << ders.dersAdi2 << setw(8) << "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) << "|" << setw(6) << setfill(' ') << notx << setw(6) << "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << endl;
    cout << setw(88) << setfill('-') << " " << endl;
    cout << "|" << setw(12) << setfill(' ') << ders.dersAdi3 << setw(2) << "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) << "|" << setw(6) << setfill(' ') << notx << setw(6) << "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << setw(6) << setfill(' ') << notx << setw(6) <<  "|" << endl;
    cout << setw(88) << setfill('-') << " " << endl;

    mat.not1 = 0;
    mat.not2 = 0;
    mat.not3 = 0;
    mat.ortalama = 0;

    fizik.not1 = 0;
    fizik.not2 = 0;
    fizik.not3 = 0;
    fizik.not4 = 0;
    fizik.ortalama = 0;

    programlama.not1 = 0;
    programlama.not2 = 0;
    programlama.not3 = 0;
    programlama.not4 = 0;
    programlama.not5 = 0;
    programlama.ortalama = 0;
    
    do
    {
        cout << "1. Matematik " << "2. Fizik " << "3. Programlama " << endl;
        cout << "Hangi derse ait not girisi yapacaksiniz ? ";
        cin >> secim;
        if(secim == 1)
        {
        cout << "Birinci notu giriniz: ";
        cin >> mat.not1;
        cout << "Ikinci notu giriniz: ";
        cin >> mat.not2;
        cout << "Ucuncu notu giriniz: ";
        cin >> mat.not3;

        mat.ortalama = (mat.not1 + mat.not2 + mat.not3) / 3;

        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(9) << setfill(' ') << "Dersler "<< setw(5) << setfill(' ') << "|" << setfill(' ') << setw(9) << "1. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "2. Not" << setw(3) << "|" << setw(9) << setfill(' ') <<  "3. Not" << setw(3) << "|" << setw(9) << setfill(' ') << "4. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "5. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "Ortalama" << setw(3) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(10) << setfill(' ') << ders.dersAdi1 << setw(4) << "|" << setw(6) << setfill(' ') << mat.not1 << setw(6) <<  "|" << setw(6) << setfill(' ') << mat.not2 << setw(6) << "|" << setw(6) << setfill(' ') << mat.not3 << setw(6) << "|" << setw(6) << setfill(' ') << "-" << setw(6) <<  "|" << setw(6) << setfill(' ') << "-" << setw(6) <<  "|" << setw(6) << setfill(' ') << mat.ortalama << setw(6) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;

    }
    else if (secim == 2)
    {
        cout << "Birinci notu giriniz: ";
        cin >> fizik.not1;
        cout << "Ikinci notu giriniz: ";
        cin >> fizik.not2;
        cout << "Ucuncu notu giriniz: ";
        cin >> fizik.not3;
        cout << "Dorduncu notu giriniz: ";
        cin >> fizik.not4;

        fizik.ortalama = (fizik.not1 + fizik.not2 + fizik.not3 + fizik.not4) / 4;

        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(9) << setfill(' ') << "Dersler "<< setw(5) << setfill(' ') << "|" << setfill(' ') << setw(9) << "1. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "2. Not" << setw(3) << "|" << setw(9) << setfill(' ') <<  "3. Not" << setw(3) << "|" << setw(9) << setfill(' ') << "4. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "5. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "Ortalama" << setw(3) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(6) << setfill(' ') << ders.dersAdi2 << setw(8) << "|" << setw(6) << setfill(' ') << fizik.not1 << setw(6) <<  "|" << setw(6) << setfill(' ') << fizik.not2 << setw(6) << "|" << setw(6) << setfill(' ') << fizik.not3 << setw(6) << "|" << setw(6) << setfill(' ') << fizik.not4 << setw(6) <<  "|" << setw(6) << setfill(' ') << "-" << setw(6) <<  "|" << setw(6) << setfill(' ') << fizik.ortalama << setw(6) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;

    }
    else if (secim == 3)
    {
        cout << "Birinci notu giriniz: ";
        cin >> programlama.not1;
        cout << "Ikinci notu giriniz: ";
        cin >> programlama.not2;
        cout << "Ucuncu notu giriniz: ";
        cin >> programlama.not3;
        cout << "Birinci uygulama notu giriniz: ";
        cin >> programlama.not4;
        cout << "Ikinci uygulama notu giriniz: ";
        cin >> programlama.not5;

        programlama.ortalama = (programlama.not1 + programlama.not2 + programlama.not3 + programlama.not4 + programlama.not5) / 5;

        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(9) << setfill(' ') << "Dersler "<< setw(5) << setfill(' ') << "|" << setfill(' ') << setw(9) << "1. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "2. Not" << setw(3) << "|" << setw(9) << setfill(' ') <<  "3. Not" << setw(3) << "|" << setw(9) << setfill(' ') << "4. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "5. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "Ortalama" << setw(3) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(12) << setfill(' ') << ders.dersAdi3 << setw(2) << "|" << setw(6) << setfill(' ') << programlama.not1 << setw(6) <<  "|" << setw(6) << setfill(' ') << programlama.not2 << setw(6) << "|" << setw(6) << setfill(' ') << programlama.not3 << setw(6) << "|" << setw(6) << setfill(' ') << programlama.not4 << setw(6) <<  "|" << setw(6) << setfill(' ') << programlama.not5 << setw(6) <<  "|" << setw(6) << setfill(' ') << programlama.ortalama << setw(6) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;

    }
    cout << "Tum tabloyu tekrar gormek ister misiniz ? (e/h) ";
    cin >> secim2;
    cout << endl;

    if(secim2 == 'e' || secim2 == 'E')
    {
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(9) << setfill(' ') << "Dersler "<< setw(5) << setfill(' ') << "|" << setfill(' ') << setw(9) << "1. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "2. Not" << setw(3) << "|" << setw(9) << setfill(' ') <<  "3. Not" << setw(3) << "|" << setw(9) << setfill(' ') << "4. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "5. Not" << setw(3) <<  "|" << setw(9) << setfill(' ') << "Ortalama" << setw(3) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(10) << setfill(' ') << ders.dersAdi1 << setw(4) << "|" << setw(6) << setfill(' ') << mat.not1 << setw(6) <<  "|" << setw(6) << setfill(' ') << mat.not2 << setw(6) << "|" << setw(6) << setfill(' ') << mat.not3 << setw(6) << "|" << setw(6) << setfill(' ') << "-" << setw(6) <<  "|" << setw(6) << setfill(' ') << "-" << setw(6) <<  "|" << setw(6) << setfill(' ') << mat.ortalama << setw(6) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(6) << setfill(' ') << ders.dersAdi2 << setw(8) << "|" << setw(6) << setfill(' ') << fizik.not1 << setw(6) <<  "|" << setw(6) << setfill(' ') << fizik.not2 << setw(6) << "|" << setw(6) << setfill(' ') << fizik.not3 << setw(6) << "|" << setw(6) << setfill(' ') << fizik.not4 << setw(6) <<  "|" << setw(6) << setfill(' ') << "-" << setw(6) <<  "|" << setw(6) << setfill(' ') << fizik.ortalama << setw(6) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        cout << "|" << setw(12) << setfill(' ') << ders.dersAdi3 << setw(2) << "|" << setw(6) << setfill(' ') << programlama.not1 << setw(6) <<  "|" << setw(6) << setfill(' ') << programlama.not2 << setw(6) << "|" << setw(6) << setfill(' ') << programlama.not3 << setw(6) << "|" << setw(6) << setfill(' ') << programlama.not4 << setw(6) <<  "|" << setw(6) << setfill(' ') << programlama.not5 << setw(6) <<  "|" << setw(6) << setfill(' ') << programlama.ortalama << setw(6) <<  "|" << endl;
        cout << setw(88) << setfill('-') << " " << endl;
        
    }

    cout << "Baska bir ders icin not girmek ister misiniz ? (e/h) ";
    cin >> secim3;

    } while (secim3 == 'e' || secim3 == 'E');
    
    cout << "Program sonlandirildi." << endl;
}