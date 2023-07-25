#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 2 ;
    int sayi ;

    cout << "bir sayi giriniz"<<endl;
    cin >> sayi;

    while(i <= 5)
    {
        cout << "2 ^ "<< i<< " = "<<pow(sayi, i) << endl;
        i++;
    }
}