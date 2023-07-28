#include <iostream>

using namespace std;

double bakiye = 0;
double limit = 5000;

void paracek(double para);
void parayatir(double para);
double bakiyeGoster();
static void anaMenu();
void limitArttir(double Newlimit);


void paracek(double para)
{
    if(para > bakiye)
    {
        cout << "Bakiye yetersiz en yüksek çekilecek tutar = " <<bakiye<< endl;
        anaMenu();
    }
    else if(para > limit)
    {
        cout << "Günlük para çekme limiti "<<limit<<" TL'dir." << endl;
        anaMenu();
    }
    else
    {
        bakiye -= para;
        cout << "Para cekildi" << endl;
        anaMenu();
    } 
}

void limitArttir(double Newlimit)
{
    if(limit > 5000)
    {
        cout << "Limit 5000 TL'den fazla olamaz." << endl;
        anaMenu();
    }
    else
    {
        limit = Newlimit;
        cout << "Limit arttirildi" << endl;
        anaMenu();
    }
}

void parayatir(double para)
{
    bakiye += para;
    cout << "Para yatirildi" << endl;
    anaMenu();
}

double bakiyeGoster()
{
    return bakiye;
}

static void anaMenu()
{
    short secim = 0;
    double a;
    cout << "*****Bankacilik Islemleri Menusu *****" << endl << endl;
    cout <<  "Para Yatir (1) " << endl;
    cout <<  "Para Cek (2) " << endl;
    cout << "Bakiye Goster (3) " << endl;
    cout << "Limit Arttir (4) " << endl;
    cout << "Seciminiz : ";
    cin >> secim;

    switch (secim)
    {
    case 1:
        cout << "Yatirilacak parayi giriniz: ";
        cin >> a;
        parayatir(a);
        break;
    case 2:
        cout << "Cekilecek parayi giriniz: ";
        cin >> a;
        paracek(a);
        break;
    case 3:
        cout << "Mevcut Bakiye :" << bakiyeGoster() << endl;
        break;
    case 4:
        cout << "Yeni limiti giriniz: ";
        cin >> a;
        limitArttir(a);
        anaMenu();
        break;
    default:
        cout << "Hatali secim" << endl;
        anaMenu();
        break;
    }
}

int main()
{
    anaMenu();
    return 0;
}