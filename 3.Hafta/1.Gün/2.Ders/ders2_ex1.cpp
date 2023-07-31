#include <iostream>

using namespace std;

class hacimHesapla{
    int x,y,z,hacim;

    public:
        hacimHesapla(int a,int b,int c)
        {
            x = a;
            y = b;
            z = c;

            hacim = x*y*z;

            cout << "Hesaplama islemi Tamamlandi.." << endl;
        }

        void goster()
        {
            cout << "Hacim :" << hacim << endl;
        }
};

int main()
{
    hacimHesapla test1(3,4,5);
    test1.goster();
}