#include <iostream>

using namespace std;

void ismgiriniz();

int main()
{
    ismgiriniz();
}

void ismgiriniz()
{
    string isim;
    cout << "Isminizi giriniz: ";
    cin >> isim;
    cout << "Merhaba " << isim << endl;
}