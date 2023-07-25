#include <iostream>

/*
    sonuç = şart ? sonuç1 : sonuç2;

    doğruysa sonuç1
    yanlışsa sonuç2
        çalışır.
*/
using namespace std;

int main()
{
    int a, b;

    cout << "birinci sayiyi giriniz"<<endl;
    cin >> a;

    cout << "ikiinci sayiyi giriniz"<<endl;
    cin >> b;

    a > b ? cout << a<<">"<<b : cout << a<<"<"<<b;
    
    return 0;
}