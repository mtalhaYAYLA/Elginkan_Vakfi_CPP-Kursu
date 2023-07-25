#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;

    cout << "bir sayi giriniz"<<endl;
    cin >> a;

    fmod(a,2); // a%2 işlemini yapar

    if(a%2==0)
        cout << "sayi cifttir" << endl;
    else
        cout << "sayi tektir" << endl;
}