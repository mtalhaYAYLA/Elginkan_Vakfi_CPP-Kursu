#include <iostream>

using namespace std;


int main()
{
    //kendisi hariç bölenleri toplamı kendisine eşit olan sayılar mükemmel sayıdır bulan kod .
    //örnek: 6 mükemmel sayıdır çünkü 1+2+3=6
    int n;
    int i;
    int j;
    int toplam = 0;

    cout << "n sayisini giriniz: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        toplam = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                toplam += j;
            }
        }
        if(toplam == i)
        {
            cout << i << " ";
        }

    }

}