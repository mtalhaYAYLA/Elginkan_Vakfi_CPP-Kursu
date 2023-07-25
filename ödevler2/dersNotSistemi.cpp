#include <iostream>

using namespace std;

int main()
{
    float mat[3], fizik[4], programlama[5];

    cout << "Matematik notlarini giriniz: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> mat[i];
    }

    cout << "Fizik notlarini giriniz: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> fizik[i];
    }

    cout << "Programlama notlarini giriniz: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> programlama[i];
    }

    float matOrt = 0, fizikOrt = 0, progOrt = 0;
    for (int i = 0; i < 3; i++)
    {
        matOrt += mat[i];
    }
    matOrt /= 3;

    for (int i = 0; i < 4; i++)
    {
        fizikOrt += fizik[i];
    }
    fizikOrt /= 4;

    for (int i = 0; i < 5; i++)
    {
        progOrt += programlama[i];
    }
    progOrt /= 5;

    cout << "Matematik ortalamasi: " << matOrt << endl;
    cout << "Fizik ortalamasi: " << fizikOrt << endl;
    cout << "Programlama ortalamasi: " << progOrt << endl;

    return 0;
}