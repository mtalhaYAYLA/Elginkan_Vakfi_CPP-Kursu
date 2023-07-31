#include <iostream>

using namespace std;

#define PI  3.1415

int main()
{
    //seçilen geometrik şeklin girilen kenar uzunluklarına göre alanını hesaplayan program. 
    //1-daire (yarıçap giriniz) 2-kare(kenar uzunluğunu giriniz) 
    //3-dikdörtgen(kısa kenar - uzun kenar giriniz) 4-ücgen(taban - yükseklik giriniz) 
    //secim için switch case yapısı ile 1-4 arası istenmeli ve yapılan seçimlere göre uzunluk bilsisi hesaplanarakj işlemyapılır programı azınız

    int secim = 0;
    float yaricap, kenar, kisaKenar, uzunKenar, taban, yukseklik, alan;

    cout << "1. Daire" << endl;
    cout << "2. Kare" << endl;
    cout << "3. Dikdortgen" << endl;
    cout << "4. Ucgen" << endl;
    cout << "Secim Yapiniz : ";
    cin >> secim;

    switch (secim)
    {
    case 1:
        cout << "Dairenin yaricapini giriniz : ";
        cin >> yaricap;
        alan = PI * yaricap * yaricap;
        cout << "Dairenin alani : " << alan << endl;
        break;
    case 2:
        cout << "Karenin bir kenarini giriniz : ";
        cin >> kenar;
        alan = kenar * kenar;
        cout << "Karenin alani : " << alan << endl;
        break;
    case 3:
        cout << "Dikdortgenin bir kenarini giriniz : ";
        cin >> kisaKenar;
        cout << "Dikdortgenin diger kenarini giriniz : ";
        cin >> uzunKenar;
        alan = kisaKenar * uzunKenar;
        cout << "Dikdortgenin alani : " << alan << endl;
        break;
    case 4:
        cout << "Ucgenin tabanini giriniz : ";
        cin >> taban;
        cout << "Ucgenin yuksekligini giriniz : ";
        cin >> yukseklik;
        alan = taban * yukseklik / 2;
        cout << "Ucgenin alani : " << alan << endl;
        break;
    default:
        cout << "Hatali secim yaptiniz." << endl;
        break;
    }

}