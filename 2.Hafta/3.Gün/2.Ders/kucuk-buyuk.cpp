#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    char *str;
    new char[100];

    cout << "Bir metin giriniz: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))   // islower() fonksiyonu karakterin küçük harf olup olmadığını kontrol eder.
        {
            str[i] = toupper(str[i]); // toupper() fonksiyonu karakteri büyük harfe çevirir.
        }
        else if (isupper(str[i]))// isupper() fonksiyonu karakterin büyük harf olup olmadığını kontrol eder.
        {
            str[i] = tolower(str[i]);// tolower() fonksiyonu karakteri küçük harfe çevirir.
        }
        cout << str[i] ;
    }
}