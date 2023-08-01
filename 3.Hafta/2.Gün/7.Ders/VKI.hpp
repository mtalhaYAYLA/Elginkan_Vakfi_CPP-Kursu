#ifndef VKI_HPP
#define VKI_HPP

#include <iostream>
#include <string>

using namespace std;


class VKI
{
    public:
        VKI();
        VKI(string , double, double);
        ~VKI();

        string getIsim();  
        double getBoy();
        double getAgirlik();

        void setIsim(string);
        void setBoy(double);
        void setKilo(double);

        double hesaplaVKI();

        private:
        string yeniIsim;
        double yeniBoy;
        double yeniAgirlik;

};

VKI::VKI()
{
    yeniBoy = 0;
    yeniAgirlik = 0;
}

VKI::~VKI()
{
    cout << "Nesne yok edildi." << endl;
}

VKI::VKI(string isim, double boy, double agirlik)
{
    yeniIsim = isim;
    yeniBoy = boy;
    yeniAgirlik = agirlik;
}

string VKI::getIsim()
{
    return yeniIsim;
}

double VKI::getBoy()
{
    return yeniBoy;
}

double VKI::getAgirlik()
{
    return yeniAgirlik;
}

void VKI::setIsim(string isim)
{
    yeniIsim = isim;
}

void VKI::setBoy(double boy)
{
    yeniBoy = boy;
}

void VKI::setKilo(double agirlik)
{
    yeniAgirlik = agirlik;
}

double VKI::hesaplaVKI()
{
    return (yeniAgirlik / (yeniBoy * yeniBoy)) * 10000;
}

#endif