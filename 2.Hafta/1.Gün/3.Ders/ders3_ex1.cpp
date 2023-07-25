#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //10 ile 20 arasındaki sayıların karakökünü almamaızı sağlayan program
    int i = 10;
    int j;

    double karekok;
    double karakok2;

    for(i; i <= 20; i++)
    {
        karekok = sqrt(i);
        karakok2 = sqrt(karekok);

        cout <<setw(6)<<setfill('.')<< i <<setfill(' ')<<setw(12)<<setprecision(4)<< karekok <<setw(12)<<setprecision(4)<<karakok2<<endl;
    }
}