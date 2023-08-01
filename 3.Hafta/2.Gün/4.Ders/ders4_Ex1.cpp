#include <iostream>
#include <sstream>

using namespace std;

class Personel
{
    protected:         // kalıtım sınıfından erişe bilmesi için protected yaptık.
        string isim;
        double para;
    public:
        Personel()
        {
            isim = " ";
            para = 0;
        }
        Personel(string ad, double maas)
        {
            isim = ad;
            para = maas;
        }
        void isim_ekle(string ad)
        {
            isim = ad;
        }
        string isim_al()
        {
            return isim;
        }
        void para_ekle(double maas)
        {
            para = maas;
        }
        double para_al()
        {
            return para;
        }
        string to_string()   
        {
            stringstream abc;
            abc << isim << " : " << para; // abc değişkenine isim ve para değişkenlerini atadık. 
            return abc.str();
        }

        // virtual void bilgi_yaz()   // virtual fonksiyon tanımladık. BUNU ARAŞTIR.
        // {
        //     cout << "Personel Bilgileri: " << endl;
        //     cout << "İsim: " << isim << endl;
        //     cout << "Maaş: " << para << endl;
        // }
};

class Kisisel_Bilgiler : public Personel
{
    private:
        string adres;
        string TC;

    public:
        void tcEkle(string kimlik_no)
        {
            TC = kimlik_no;
        }
        string tcOku()
        {
            return TC;
        }
        string to_Bilgi()
        {
            stringstream abc;
            abc << isim << " : " << para << " : " << TC;
            return abc.str();
        }
};

int main()
{
    Personel ilkkisi("Talha", 3000);

    cout << ilkkisi.to_string() << endl;

    ilkkisi.isim_ekle("Muhammed Talha");
    cout << ilkkisi.to_string() << endl;

    Personel ikincikisi;
    cout << ikincikisi.to_string() << endl;

    Kisisel_Bilgiler ornekKisi;
    cout << ornekKisi.isim_al() << endl;

    ornekKisi.tcEkle("12345678910");
    cout << ornekKisi.to_string() << " : " << ornekKisi.tcOku() << endl;

    ornekKisi.para_ekle(5000);
    cout << ornekKisi.to_string() << " : " << ornekKisi.tcOku() << endl;

    ornekKisi.isim_ekle("Muhammed Talha");
    cout << ornekKisi.to_string() << " : " << ornekKisi.tcOku() << endl;
    
    cout <<"----------------------------------"<< endl;

    cout << ornekKisi.to_Bilgi() << endl;


    return 0;
}