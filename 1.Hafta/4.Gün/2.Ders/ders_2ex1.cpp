#include <iostream>

/*#include <cmath>

bu kütüphaneyle pi sayısını çeke bilirim 
 cout <<M_PI;  
 */

#include <iomanip> //virgülden sonraki basamak için

using namespace std;

int main()
{
    // const sabitleme işlemi ;

    const float pi = 3.1415;
    float yaricap;

    cout << "dairenin alanini giriniz\n";
    cin >> yaricap;

    float son = pi*(yaricap*yaricap);

    cout << "Dairenin alani \n-----------------------\n "<<setprecision(4)<<son<<endl;
    
}