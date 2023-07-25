#include <iostream>

using namespace std;

int sayi = 15;
int deneme();
int değer = 30; // global değişken tanımlama alanı

int main()
{
    cout << sayi << endl;
    cout << değer << endl;
    cout << deneme() << endl;

    return(0); 
}

int deneme()
{
    return(değer);
}