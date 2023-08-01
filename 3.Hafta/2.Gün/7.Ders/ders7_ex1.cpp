#include "VKI.hpp"

int main()
{
    string isim;
    double boy, agirlik;

    cout << "isim: "; cin >> isim;
    cout << "Boy: "; cin >> boy;
    cout << "Agirlik: "; cin >> agirlik;

    VKI a1(isim, boy, agirlik);

    cout << "İsim: " << a1.getIsim() << endl;
    cout << "Boy: " << a1.getBoy() << endl;
    cout << "Agirlik: " << a1.getAgirlik() << endl;
    cout << "VKI: " << a1.hesaplaVKI() << endl;
    
    if(a1.hesaplaVKI() < 18.5)
        cout << "Zayif" << endl;
    else if(a1.hesaplaVKI() < 25)
        cout << "Normal" << endl;
    else if(a1.hesaplaVKI() < 30)
        cout << "Kilolu" << endl;
    else
        cout << "Obez" << endl;

    return 0;
}

