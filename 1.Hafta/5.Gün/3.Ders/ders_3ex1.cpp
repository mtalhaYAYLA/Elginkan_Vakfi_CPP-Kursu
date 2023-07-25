#include <iostream>

using namespace std;

int main()
{
    string ad,soy;
    int is, cs, son,pirim;

    cout<<"\n\n**** Ucret Hesabi ****"<<endl<<endl;
    cout<<"satis elemaninin adini giriniz = ";
    cin >>ad;
    cout<<"satis elemaninin  soyadini giriniz = ";
    cin>>soy;
    cout<<"satis elemaninin toplam saati giriniz = ";
    cin>>cs;
    cout<<"satis elemaninin stilan urun toplamini giriniz = ";
    cin>>is;

    son = cs * 50;

    if(is > 5000)
    {
        pirim = 1000;
    }
    else if(is > 2500 && is < 5000)
        pirim = 500;
    else
        pirim = 0;
    
    cout<<"-------------------------------------"<<endl;
    cout<<"satis elemaninin = "<<ad<< " "<<soy << endl<< endl;

    cout<<"satis elemaninin satis miktari = "<<is<<endl;
    cout<<"satis elemaninin calisma saati = "<<cs<<endl<<endl;

    cout<< "Maas Bordrosu"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"ucret = "<<son <<" ve alacagi pirim = "<< pirim<<endl;
    cout<<"toplam ucret = "<<son + pirim<<endl;
    cout<<"-------------------------------------"<<endl;
}