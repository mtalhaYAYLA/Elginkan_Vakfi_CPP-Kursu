#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "lutfen bir deger giriniz : ";
    cin >> a;
    cout << "lutfen bir deger giriniz : ";
    cin >> b;

    if (a>b)
        cout<< a<<" > "<<b;
    else if(a == b)
        cout<< a<<" = "<<b;
    else
        cout<< a<<" < "<<b; 
    
}