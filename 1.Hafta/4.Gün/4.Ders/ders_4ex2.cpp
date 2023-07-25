#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
    int s1, s2, s3;
    int toplam = 0;
    int karresi ;

    cout << "birinci sayiyi giriniz"<<endl;
    cin >> s1;

    cout << "ikiinci sayiyi giriniz"<<endl;
    cin >> s2;

    cout << "ucuncu sayiyi giriniz"<<endl;
    cin >> s3;

    toplam = s1 + s2 + s3;

    karresi = pow(toplam, 2);

    cout << "toplam : " << toplam << endl;
    cout << "sonuc : " << karresi << endl;
    karresi > 500 ? cout << "gecerli" : cout << "gecersiz";

    cout << endl;
    
    return 0;
}