#include <iostream>
#include <iomanip>

using namespace std;

struct araba
{
    char marka[10];
    char model[10];
    char yakit_turu[10];
    int yil;
    string renk;
    int beygir_gucu;
    int motor_hacmi;
    int fiyat;
};

void bilgileri_yaz(araba *x)
{
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "   ---Araba Bilgileri---" << endl;
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "Marka :   " << x->marka << setw(6) << endl;
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "Model :   " << x->model << setw(6) << endl;
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "Yil:   " << x->yil << setw(6) << endl;
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "Motor hacmi:   " << x->motor_hacmi << setw(6) << endl;
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "Yakit Turu :   " << x->yakit_turu << setw(6) << endl;
    cout << setw(30) << setfill('-') << " " << endl;
    cout << "|" << setw(17) << setfill(' ')<< "Renk :   " << x->renk << setw(6) << endl;
    cout << setw(30) << setfill('-') << " " << endl;
}

void bilgileri_al(araba *x)
{
    cout << "Bilgileri giriniz: " << endl;
    cout << "Marka: ";
    cin >> x->marka;
    cout << "Model: ";
    cin >> x->model;
    cout << "Yil: ";
    cin >> x->yil;
    cout << "Motor hacmi: ";
    cin >> x->motor_hacmi;
    cout << "Yakit Turu : ";
    cin >> x->yakit_turu;
    cout << "Renk: ";
    cin >> x->renk;

}

int main()
{
    araba a1;
    bilgileri_al(&a1);
    bilgileri_yaz(&a1);
    return 0;
}