#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "bir sayi giriniz"<<endl;
    cin >> x;

    cout << floor(x) << endl; // aşağı yuvarlama işlemi yapar
    cout << ceil(x) << endl; // yukarı yuvarlama işlemi yapar
}