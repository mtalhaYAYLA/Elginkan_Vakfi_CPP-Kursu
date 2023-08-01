#include <iostream>

using namespace std;

int main()
{
    int s1 = 0;
    int s2 = 0;
    int i = 1;
    char c = 'e';

    do
    {
        while(i <= 5)
        {
            cout << i << ". sayi giriniz: "; cin >> s1;
            s2 += s1;
            i++;
        }
        cout << "Toplam: " << s2 << endl;
        cout << "Devam etmek istiyor musunuz? (e/h)"; cin >> c;
        i = 1;
        s2 = 0;
    } 
    while (c == 'e' || c == 'E');

    cout << "Program sonlandirildi." << endl;   
}