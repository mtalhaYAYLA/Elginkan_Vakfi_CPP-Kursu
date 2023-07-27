#include <iostream>

using namespace std;

int fahrenaytCevir()
{
    int fahrenayt;
    cout << "Fahrenayt degerini giriniz: "; 
    cin >> fahrenayt;
    int celcius = (fahrenayt - 32) * 5 / 9;
    cout << "Celcius degeri: " << celcius << endl;
    return celcius;
}

int main()
{
    int i;

    i = fahrenaytCevir();
    cout << i << endl; 

    return 0;
}