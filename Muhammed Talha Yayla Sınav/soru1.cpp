#include <iostream>

using namespace std;

int main()
{
    // 1 ile 12 arasında girilen ay bilgisine göre ilgili ayı ve ait olduğu mevsimi ekrana yazdıran program
    int ay;
    cout << "Ay giriniz: ";
    cin >> ay;
    switch (ay)
    {
    case 1:
        cout << "Ocak - Kis";
        break;
    case 2:
        cout << "Şubat - Kis";
        break;
    case 3:
        cout << "Mart - ilkbahar";
        break;
    case 4:
        cout << "Nisan - ilkbahar";
        break;
    case 5:
        cout << "Mayis - ilkbahar";
        break;
    case 6:
        cout << "Haziran - Yaz";
        break;
    case 7:
        cout << "Temmuz - Yaz";
        break;
    case 8:
        cout << "Agustos - Yaz";
        break;
    case 9:
        cout << "Eylul - Sonbahar";
        break;
    case 10:
        cout << "Ekim - Sonbahar";
        break;
    case 11:
        cout << "Kasim - Sonbahar";
        break;
    case 12:
        cout << "Aralik - Kis";
        break;
    default:
        cout << "Hatali giris yaptiniz.";
        break;
    }
    return 0;
}