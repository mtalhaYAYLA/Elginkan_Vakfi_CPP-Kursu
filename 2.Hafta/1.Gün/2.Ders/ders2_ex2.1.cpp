#include <iostream>

using namespace std;

int mukemmelmi(int x)
{
    //mukemmel sayi kontrolu
    int i;
    int toplam = 0;
    for(i = 1; i < x; i++)
    {
        if(x % i == 0)
        {
            toplam += i;
        }
    }
    if(toplam == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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
        if(mukemmelmi(i) == 1)
        {
            cout << i << " ";
        }

    }

}