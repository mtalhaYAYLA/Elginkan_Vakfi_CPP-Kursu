#include <iostream>

using namespace std;

int main()
{
    //* Daha önce yaptığımız 1'den klavyeden girilen n sayısına kadar olan tek sayıların toplamını veren programı
    //* if yapısı (goto) kullanarak yazınız.
    
    cout << "n sayisini giriniz: ";
    int n = 0;
    cin >> n;

    int i = 1;
    int toplam = 0;
    start:
    if(i < n)
    {
        if(i % 2 == 1)
            toplam += i;
        i++;
    goto start;
    }
    cout << "Toplam: " << toplam << endl;
}