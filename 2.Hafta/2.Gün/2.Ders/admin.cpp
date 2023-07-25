#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int main()
{
    string root = "abcd", kullaniciAdi;
    int şifre = 4321, şifreGir;
    int hata = 3;

    do
    {
        cout << "Kullanici adi: ";
        cin >> kullaniciAdi;
        cout << "Sifre: ";
        cin >> şifreGir;

        if(root == kullaniciAdi && şifre == şifreGir){
            cout << "Giris basarili." << endl;
            break;
        }
        else
        {
            cout<< "Hatali kullanici adi veya sifre. Kalan hakkiniz: " << hata << endl;
            hata--;
        }
            
        //hata-
            
        
    
    } while (hata > 0);
}