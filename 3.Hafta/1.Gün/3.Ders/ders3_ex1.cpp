#include <iostream>
#include <string>

using namespace std;

class Sinema{

    int toplamKoltukSayisi;
    int bosKoltukSayisi;
    int salonMevcut;
    double bakiye;
    int salonNo;
    int satilanBiletİndirimli = 0;
    int satilanBiletTam = 0;

    const double TAM = 150.0;
    const double INDIRIMLI = 120.0;

    private:

    public:
        int salon_no, koltukadet, menusec;
    public: Sinema()
    {
        bakiye = 0;
        salonMevcut = 0;
    }

    void salon_olustur(int salon_no, int koltuksay)
    {
        toplamKoltukSayisi = koltuksay;
        salonNo = salon_no;
        bosKoltukSayisi = toplamKoltukSayisi;
        bakiye = 0;
        salonMevcut++;
    }

    double bakiyeOgren()
    {
        return bakiye;
    }

    void bilet_satis(bool indirimliSecim)
    {
        if(bosKoltukSayisi == 0)
        {
            cout << "Salon dolu." << endl;
            return;
        }
        if (indirimliSecim == 0)
        {
            bakiye += INDIRIMLI;
            cout << "Bilet satildi." << endl;
            satilanBiletİndirimli++;
        }
        else
        {
            bakiye += TAM;
            cout << "Bilet satildi." << endl;
            satilanBiletTam++;
        }
        bosKoltukSayisi--;
    }

    void BiletIptal(bool iptal)
    {
        if(iptal == 1 && satilanBiletTam > 0)
        {
            bosKoltukSayisi++;
            satilanBiletTam--;
            bakiye -= TAM;
            cout << "Tam bilet iptal islemi gerceklestirildi";
        }
        else if(iptal == 0 && satilanBiletİndirimli > 0)
        {
            bosKoltukSayisi++;
            satilanBiletİndirimli--;
            bakiye -= INDIRIMLI;
            cout << "indirimli bilet iptal islemi gerceklestirildi";
        }
        else
            cout << "Bilet satisi gerçellestirilmediginden iptal olamaz";
    }

    int boskoltukOgren()
    {
        return bosKoltukSayisi;
    }

    int SalonKontrol()
    {
        return salonMevcut;
    }

    int AnaMenu()
    {
        cout << "-----------Sinema Bilet Satis Sistemi---------" << endl;
        cout << "1. Salon Olustur" << endl << "2. Bilet Satis" << endl << "3. Salon Goruntule" << endl << "4. Bilet Iptal" << endl << "5. Bakiye Goruntule" << endl << "6. Cikis" << endl;
        cout << "Seciminiz: "; cin >> menusec;
        return menusec;
    }

};

int main()
{
    int secim;
    Sinema salon;
    bool indirimliSecim; 

    do
    {
        secim = salon.AnaMenu();
        
        if(salon.SalonKontrol() != 0 || secim == 1 || secim == 5)
        {
            switch (secim)
            {
                case 1: // Salon Olustur
                    cout << "Salon no : ";
                    cin>> salon.salon_no;
                    cout << "Koltuk adet : ";
                    cin >> salon.koltukadet;
                    salon.salon_olustur(salon.salon_no, salon.koltukadet);
                    cout << "Salon olusturuldu." << endl;
                    break;
                case 2:
                    cout << "0 -> indirimli Bilet" << endl << "1 -> tam Bilet" << endl;
                    cout << "Seciminiz : ";
                    cin >> indirimliSecim;
                    salon.bilet_satis(indirimliSecim);
                    break;
                case 3:
                    cout << "Salon no : " << salon.salon_no << endl;
                    cout << "Koltuk adet : " << salon.boskoltukOgren() << endl;
                    break;
                case 4:
                    cout << "Bilet iptal edildi." << endl;
                    break;
                case 5:
                    cout << "Bakiye : " << salon.bakiyeOgren() << endl;
                    break;
            }
        }
        else
        {
            cout << "Salon olusturulmamis.\n lutfen once solon olusturunuz." << endl;
        }


    } while (secim != 6);
}