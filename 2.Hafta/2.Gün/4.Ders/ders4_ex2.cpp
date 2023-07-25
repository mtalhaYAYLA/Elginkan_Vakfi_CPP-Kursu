#include <iostream>

using namespace std;

int main()
{
    int dizi[5];

    int diziboyutu = sizeof(dizi) / sizeof(dizi[0]); //diziboyutu = sizeof(dizi) / sizeof(*dizi); // diziboyutu = sizeof(dizi) / sizeof(int);

    int enbuyuk = dizi[0];

    for (int i = 0; i < diziboyutu; i++)
    {
        cout << "Dizinin " << i + 1 << ". elemanini giriniz: ";
        cin >> dizi[i];
    }

    for (int i = 0; i < diziboyutu; i++)
    {
        if (dizi[i] > enbuyuk)
        {
            enbuyuk = dizi[i];
        }
    }

    cout <<"----------------------------------"<< endl;
    cout << "Dizinin en buyuk elemani: " << enbuyuk << endl;

    return 0;
}