#include <iostream>
#include <ctime>  //time fonksiyonu için
#include <cstdlib> // rand fonksiyonu için

/*
    raskele seçilen sayıyı tahmin etme ve döngü olmadan goto komutuyla tekrarlanma;
*/
using namespace std;

int main()
{
    int sayi, girdi, yanit;

    // rasgele sayı algoritması;
    int enFazla = 100, enAz = 0;
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        sayi = rand() % (enFazla - enAz + 1 ) + enAz ;
    }
a:
        cout << "bir sayi giriniz = ";
        cin >> girdi;
    if (sayi == girdi)
    {
        cout<<"tebrikler dogru tahmin\n";
        cout <<"üretilen sayi = "<<sayi <<endl;
    }
    else
    {
        cout << "yanlis tahmin"<<endl;
        if(girdi > sayi)
            cout<< "daha kucuk sayi girin"<<endl;
        else
            cout << "daha buyuk sayi giriniz"<<endl;
    }
    cout<<"---------------------------------------"<<endl;
    cout <<"sayiyi ogrenmek istermisiniz?"<<endl;
    cout << "evet ise 1/ hayir ise 2" << endl;
    cin>> yanit;

    if(yanit == 1)
        cout <<"rasgele uretilen sayi = " <<sayi<<endl<<endl;
    if(yanit == 2)
        goto a;

    cout<<"program sonlaniyot"<<endl;
}
