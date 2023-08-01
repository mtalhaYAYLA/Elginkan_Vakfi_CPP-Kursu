#include <iostream>
#include "ders5.hpp" // ders5.hpp dosyasını dahil ettik.

using namespace std;

int main()
{
    int n, sonuc = 0;
    cout << "Bir sayi giriniz: ";
    cin >> n;

    sonuc = kare(n);
    cout << "Sayinin karesi : " << sonuc << endl;
}