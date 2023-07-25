#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // terminalde türkçe karakter basmak içindir.

    int sayı;

    cout << "bir not giriniz = ";
    cin >> sayı;

    if(sayı > 50)
        cout << "geçti"<<endl;
    else
        cout << "kaldı"<<endl;
}