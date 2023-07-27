#include <iostream>

using namespace std;

int ustalmak(int ,int);

int main()
{
    int sonuc = 1;
    sonuc = ustalmak(3,4);
    cout << sonuc << endl;
}

int ustalmak(int sayi,int us)
{
    int sonuc = 1;
    for (int i = 1; i <= us; i++)
    {
        sonuc *= sayi;
    }
    return sonuc;
}
