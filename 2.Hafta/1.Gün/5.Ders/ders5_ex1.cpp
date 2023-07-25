#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayac = 1;
    int toplam = 0;
    int sayi;
    int n;

    cout << "toplam sayi miktarini giriniz";

    while(sayac <= n)
    {
        cout << sayac<< ". sayiyi giriniz";
        cin >> sayi;
        toplam += sayi;
        sayac++;
    }

    cout << "Girilen Sayilarin Toplami = "<< toplam<<endl;
}