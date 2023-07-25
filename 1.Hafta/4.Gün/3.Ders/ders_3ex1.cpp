#include <iostream>

using namespace std;

int main()
{
    bool sonuc;
    sonuc = (7 == 5);
    cout << "---------------------" << endl<<endl;
    cout << "7 == 5"<< "-->"<<sonuc << endl;
    
    cout << "---------------------" << endl;
    sonuc = (5 > 4);
    cout << "5 > 4"<< "-->"<<sonuc << endl;

    cout << "---------------------" << endl;
    sonuc = (5 < 4);
    cout << "5 < 4"<< "-->"<<sonuc << endl;

    cout << "---------------------" << endl;
    sonuc = (5 >= 4);
    cout << "5 >= 4"<< "-->"<<sonuc << endl;

    cout << "---------------------" << endl;
    sonuc = (5 <= 4);
    cout << "5 <= 4"<< "-->"<<sonuc << endl;

    cout << "---------------------" << endl;
    sonuc = (5 != 4);
    cout << "5 != 4"<< "-->"<<sonuc << endl<<endl;

    cout << "---------------------" << endl;

}