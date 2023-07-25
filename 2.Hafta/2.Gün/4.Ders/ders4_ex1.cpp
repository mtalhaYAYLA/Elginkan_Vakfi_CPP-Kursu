#include <iostream>

using namespace std;

int main()
{
    int dizi[5];
    int enbuyuk=dizi[0];
    
    for(int i=0; i<5; i++)
    {
        cout << "Dizinin " << i+1 << ". elemanini giriniz: ";
        cin >> dizi[i];
    }

    for(int i=0; i<5; i++)
    {
        if(dizi[i]>enbuyuk)
        {
            enbuyuk=dizi[i];
        }
    }
    cout << endl;
    cout <<"----------------------------------" << endl;
    cout << "Dizinin en buyuk elemani: " << enbuyuk << endl<<endl;

    return 0;
}