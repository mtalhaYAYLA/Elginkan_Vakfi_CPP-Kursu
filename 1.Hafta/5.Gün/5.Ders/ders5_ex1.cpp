#include <iostream>

using namespace std;

int main()
{
    int sayi;
    string yazi;

    cout << "1 ile 999 arasinda Sayi giriniz: ";
    cin >> sayi;

    if(sayi >= 1 && sayi <= 999)
    {
        switch (sayi / 100)
        {
        {
        case 0:
            yazi = " ";
            break;
        case 1:
            yazi = "yüz";
            break;
        case 2:
            yazi = "ikiyüz";
            break;
        case 3:
            yazi = "üçyüz";
            break;
        case 4:
            yazi = "dörtyüz";
            break;
        case 5:
            yazi = "beşyüz";
            break;
        case 6:
            yazi = "altiyüz";
            break;
        case 7:
            yazi = "yediyüz";
            break;
        case 8:
            yazi = "sekizyüz";
            break;
        case 9:
            yazi = "dokuzyüz";
            break;
        }            
        default:
            break;
        }
        switch (sayi/10)
        {
        {
        case 0:
            yazi += " ";
            break;
        case 1:
            yazi += "on";
            break;
        case 2:
            yazi += "yirmi";
            break;
        case 3:
            yazi += "otuz";
            break;
        case 4:
            yazi += "kirk";
            break;
        case 5:
            yazi += "elli";
            break;
        case 6:
            yazi += "altmis";
            break;
        case 7:
            yazi += "yetmis";
            break;
        case 8:
            yazi += "seksen";
            break;
        case 9:
            yazi += "doksan";
            break;
        }
        default:
            break;
        }
        switch (sayi % 10)
        {
        {
            case 0:
                yazi += " ";
                break;
            case 1:
                yazi += "bir";
                break;
            case 2:
                yazi += "iki";
                break;
            case 3:
                yazi += "üç";
                break;
            case 4:
                yazi += "dört";
                break;
            case 5:
                yazi += "beş";
                break;
            case 6:
                yazi += "alti";
                break;
            case 7:
                yazi += "yedi";
                break;
            case 8:
                yazi += "sekiz";
                break;
            case 9:
                yazi += "dokuz";
                break;
        }
        }
        cout << yazi << endl;
    }      
}