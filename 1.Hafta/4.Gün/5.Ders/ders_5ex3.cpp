#include <iostream>

using namespace std;

int main()
{
    double a;

    a = 2.548756;

    cout.precision(6); // virgülden sonra 5 basamak yazdırır // toplam basamak sayısı 6 olur  // bu yöntem tüm çıktı verilerini bu formata alır satır farketmeksizin.
    cout << a << endl;
    cout << fixed << a << endl; // virgülden sonra 6 basamak yazdırır
}