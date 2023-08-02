#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;


class robot
{
    int secim = 7;
    public:
        int salon = 1, mutfak = 2, hol = 3, calisma_odasi = 4, istasyon = 5;
        int sayi = 0;
        int delay = 1;
        clock_t start, difference; 
    
    robot()
    {
        cout << "Robot acildi." << endl;
       
          start = clock(); 

    }
    void calisiyor()
    {
        do
        {
         cout << "Robot calisiyor." << endl;
            cin >> secim;
            sleep(2);

        }
         while(secim == 1 || secim == 2 || secim == 3 || secim == 4);
    }

    int hareket(int secim)
    {
        if(secim == 1)
            cout << "Salon Supuruluyor." << endl;
        else if(secim == 2)
            cout << "Mutfak Supuruluyor." << endl;
        else if(secim == 3)
            cout << "Hol Supuruluyor." << endl;
        else if(secim == 4)
            cout << "Calisma Odasi Supuruluyor." << endl;
        else if(secim == 5)
            cout << "Sarj Istasyonu Supuruluyor." << endl;
        
        if(secim == 1 || secim == 2 || secim == 3 || secim == 4)
            calisiyor();

    }

    int robot_where()
    {
        return secim;
    }
    void donus()
    {
        difference = clock() - start; 
        cout << "Robot " << difference / 1000 << " saniyede calisti." << endl;
        cout << "Robot kapatildi." << endl;
    }
    void setSecim()
    {
        cout << "Robot Nerede icin 0 giriniz." << endl;
        if(secim == 0)
            robotnerede(secim);
        cout << "Robot Nereyi Supursun: " << endl;
        cout << "Salon icin 1, Mutfak icin 2, Hol icin 3, Calisma Odasi icin 4 " << endl;
        cout << "Sarj istasyonu icin 5 giriniz: " << endl;
        cout << "Secim :"; cin >> secim;
    }

    void robotnerede(int secim)
    {
        if(secim == 1)
            cout << "Robot Salonda." << endl;
        else if(secim == 2)
            cout << "Robot Mutfakta." << endl;
        else if(secim == 3)
            cout << "Robot Holde." << endl;
        else if(secim == 4)
            cout << "Robot Calisma Odasinda." << endl;
        else if(secim == 0)
            cout << "Robot Sarj Istasyonunda." << endl;
    }

};


int main()
{
    robot r1;
    r1.setSecim();
    r1.hareket(r1.robot_where());
    r1.robotnerede(r1.robot_where());
    r1.donus();
    return 0;
}