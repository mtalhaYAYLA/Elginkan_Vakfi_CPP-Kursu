#include <iostream>

using namespace std;

int asalmi(int x)
{
    //asal sayi kontrolu
    int i;
    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n ;
    int i;

    cout << "n sayisini giriniz: ";
    cin >> n;

    cout << "1 ile " << n << " arasindaki asal sayilar: ";
    for(i = 2; i <= n; i++)
    {
        if(asalmi(i) == 1)
        {
            cout << i << " ";
        }
    }
}