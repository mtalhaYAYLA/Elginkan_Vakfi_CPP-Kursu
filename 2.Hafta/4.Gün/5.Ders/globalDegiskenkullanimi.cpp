#include <iostream>

using namespace std;

int x = 9, y = 3;

int fonksiyon1(int);
int fonksiyon2(int);
int fonksiyon3(int);
int fonksiyon4();


int main()
{
    cout << fonksiyon1(1)<<endl;
    cout << fonksiyon2(2)<<endl;
    cout << fonksiyon3(3)<<endl;
    cout << fonksiyon4()<<endl;
}

int fonksiyon1(int y)
{
    return ::x*(y + ::y);// ::x = 9, ::y = 3 global degiskenler oldugu icin 
    //fonksiyon1 icindeki x ve y degiskenleri global degiskenleri gosterir.
    //y = 1 oldugu icin 9*(1+3) = 36 doner.
}

int fonksiyon2(int y)
{
    return ::x*(y + ::y)+fonksiyon1(4);// ::x = 9, ::y = 3
}

int fonksiyon3(int y)
{
    return fonksiyon1(y) + fonksiyon2(y);
}

int fonksiyon4()
{
    return ::x*::y; // ::x = 9, ::y = 3
}