#include <iostream>

using namespace std;

int main()
{
    int dizi[5];
    int i, toplam = 0;

    for(i = 0; i < 5; i++)
    {
        cout << "Deger["<<i<<"]= ";
        cin >> dizi[i];
        toplam += dizi[i];
    }
    cout <<"+"<<endl;
    cout<<"-------------- "<<endl;
    cout << "Toplam: " << toplam << endl;
    
    return 0;
}