#include <iostream>

using namespace std;

string sayiDonustur(int sayi);

int main()
{
    //kullanıcının girdiği 3 adet notun ortalaması alınacak , ortalama sonucu rakam ve yazı ile ekranda gosterilecek . 
    //50 ve üstü gecti 50 altı kaldı.not girisleri 0-100 arası olması sağlanacak . değilse tekrar not girisi istenecek.

    int not1, not2, not3, ortalama;

    do
    {
        cout << "1. notu giriniz: ";
        cin >> not1;
        cout << "2. notu giriniz: ";
        cin >> not2;
        cout << "3. notu giriniz: ";
        cin >> not3;

        ortalama = (not1 + not2 + not3) / 3;

        if (not1 < 0 || not1 > 100 || not2 < 0 || not2 > 100 || not3 < 0 || not3 > 100)
        {
            cout << "Hatali not girisi yaptiniz. Lutfen tekrar deneyiniz." << endl;
        }

        else if (ortalama >= 50)
        {
            cout << "Ortalamaniz: " << ortalama <<" " << sayiDonustur(ortalama) << " Gectiniz." << endl;
        }

        else if (ortalama < 50)
        {
            cout << "Ortalamaniz: " << ortalama << " "<< sayiDonustur(ortalama) << " Kaldiniz." << endl;
        }

    }while(not1 < 0 || not1 > 100 || not2 < 0 || not2 > 100 || not3 < 0 || not3 > 100);
    
}


string sayiDonustur(int sayi)
{
    string yazi;

    if(sayi >= 1 && sayi <= 999)
    {
        switch (sayi / 100)
        {
        {
        case 0:
            yazi = " ";
            break;
        case 1:
            yazi = "yuz";
            break;
        case 2:
            yazi = "ikiyuz";
            break;
        case 3:
            yazi = "ucyuz";
            break;
        case 4:
            yazi = "dortyuz";
            break;
        case 5:
            yazi = "besyuz";
            break;
        case 6:
            yazi = "altiyuz";
            break;
        case 7:
            yazi = "yediyuz";
            break;
        case 8:
            yazi = "sekizyuz";
            break;
        case 9:
            yazi = "dokuzyuz";
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
                yazi += "üc";
                break;
            case 4:
                yazi += "dort";
                break;
            case 5:
                yazi += "bes";
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
        return yazi;
    }
    return " ";     
}