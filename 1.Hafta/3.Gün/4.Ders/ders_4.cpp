#include <iostream>

using namespace std;

int main()
{
    int sayi = 9;        // int -> float yapalım sonucu görelim
    float a, b, c;
    
    a = sayi / 4;        // tamsayı / tamsayı -> sonuç tam sayı olur
    b = sayi / 4.0;      // tam sayı / ondalıkloı sayı -> sonuç ondalıklı olur
    c = (float)sayi/4;   // sayı önce floata dönüşür sonra bölünür
    cout << "a degeri = " << a << endl;
    cout << "b degeri = " << b << endl;
    cout << "c degeri = " << c << endl;

    return 0;
}